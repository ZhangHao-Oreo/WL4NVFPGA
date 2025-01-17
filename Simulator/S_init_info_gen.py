#-*-coding:utf-8-*-


import os

# 实验序号
E_0 = 0  # 细粒度写均衡
E_1 = 1  # 粗粒度写均衡     BRAM在fin
E_2 = 2  # 传统策略写均衡
E_3 = 3  # 不加写均衡

# # # # # # # # # #
E = 0



if (E == E_0):
    E_path = "e_0/"
elif (E == E_1):
    E_path = "e_1/"
elif (E == E_2):
    E_path = "e_2/"
elif (E == E_3):
    E_path = "e_3/"
elif (E == E_4):
    E_path = "e_4/"



# amp_num 为写放大系数

benchmark = "B5"  #"boundtop"      pglobalreset         0.003,0.003
# benchmark =  "B1" #"LU8PEEng" reset_n       0.96,0.04
# benchmark =  "B3" #"LU32PEEng"
# benchmark =  "mcml"
# benchmark =  "mkDelayWorker32B"  # 0.06,0.06  wciS0_MReset_n    wsiS1_MReset_n
# benchmark = "B2" #"mkPktMerge"   RST_N      0.96,0.04
# benchmark = "B4" #"mkSMAdapter4B"    # wciS0_MReset_n    0.96,0.04
# benchmark = "B0" # "or1200"    rst    0.003,0.003
#
grid_path = "/home/zhlab/BRAM/SRC_07_09/FPGA_arch/100x100.arch"
arch_name = "A1.xml" #"k6_frac_N10_mem32K_40nm_1.xml"

BRAM_log = 1                    # 初始化BRAM phy 信息
Random_input = 2                # 初始化随机激励
Pin_set_1 = 3                   # info              有net文件
Pin_set_2 = 4                   # log_info
# STAGR = int(sys.argv[1])
STAGR = 2
USER = 1
TEST_NUM = 15
# 构造pin_dict ana...

#BRAM_log
# 创建BRAM   x_ymem初始化文件
def new_BRAM_file(benchmark_BRAM_path,name,MEM_ROW,MEM_COL):
        BRAM_file_path = benchmark_BRAM_path + name + "mem"
        BRAM_file = open(BRAM_file_path, 'w');
        pro_info = "info\nuse\n0\nmode\n0\nused_num\n0\navg\n0\nother\n0\nother1\n0\nmat\n";
        BRAM_file.write(pro_info);
        for i in range(MEM_ROW):
            str_ = ""
            for j in range(MEM_COL):
                str_ += "0 ";
            str_ += "\n";
            BRAM_file.write(str_);
        BRAM_file.close();
# 产生BRAM_log文件
def CREAT_BRAM_FILE(grid_path,benchmark_BRAM_path,MEM_COL,MEM_ROW):
    arr = []
    arc_read = open(grid_path)
    row = 0
    for line_ in arc_read:
        arr_ = []
        for col in range(len(line_) - 1):
            arr_.append(line_[col])
        arr.append(arr_)
    row_t = len(arr)
    col_t = len(arr[0])
    for i in range(0, col_t):
        flag = 1
        new_con = 0
        for j in range(0, row_t):
            if ((flag == 7 or flag == 1)):
                flag = 1
                new_con = j + 1
            if (arr[row_t - 1 - j][i] == "e"):
                str_tmp = str(i) + "_" + str(new_con)
                arr[row_t - 1 - j][i] = str_tmp
                if ((flag == 7 or flag == 2)):
                    new_BRAM_file(benchmark_BRAM_path,str_tmp,MEM_ROW,MEM_COL)
            flag += 1







#Random_input
# 产生随机激励
def CREAT_RAND_ACT(get_act_path,benchmark_src_path,TEST_NUM,benchmark,benchmark_pre_info_src_path):
    benchmark_blif = benchmark_pre_info_src_path +benchmark+ ".blif"
    benchmark_act = benchmark_src_path + "act_pool/"

    for i in range(0,TEST_NUM):
        get_ace_command = get_act_path + " " + benchmark_blif + " " + benchmark_act + str(i) + ".act"
        os.system(get_ace_command)
def CORRECTION(benchmark_act_path,NUM):
    benchmark_act = benchmark_act_path
    for i in range(0,NUM):
        list = []
        file_path = benchmark_act + str(i) + ".act"
        file = open(file_path)
        for line_ in file:
            tmp_line = line_.lower()
            if (tmp_line.find("clk")!=-1):
                clk_tmp = line_.split()
                clk_str = clk_tmp[0] + " 0.5" + " 1.0\n"
                list.append(clk_str)
                continue
            list.append(line_)
        file.close()
        file = open(file_path , 'w')
        for list_ in list:
            file.write(list_)
        file.close()
def MY_CORRECTION(benchmark_act_path,NUM,key_str,one_ratio,conv_ratio):
    key_str = key_str.lower()
    benchmark_act = benchmark_act_path
    for i in range(0,NUM):
        list = []
        file_path = benchmark_act + str(i) + ".act"
        file = open(file_path)
        for line_ in file:
            tmp_line = line_.lower()
            if (tmp_line.find(key_str)!=-1):
                clk_tmp = line_.split()
                clk_str = clk_tmp[0] + " "+str(one_ratio) + " "+str(conv_ratio)+"\n"
                list.append(clk_str)
                continue
            list.append(line_)
        file.close()
        file = open(file_path , 'w')
        for list_ in list:
            file.write(list_)
        file.close()


#Pin_set
# 产生所需要的文件
def CREAT_INIT_FILE(vtr_release_path,benchmark_pre_info_src_path,benchmark,arch_file_path):
    blif_file_path = benchmark_pre_info_src_path+benchmark+".blif"
    command = vtr_release_path + " " +arch_file_path + " "+blif_file_path +" -nodisp --pack --place >>init_file.txt"
    os.system(command)
    command_1 = "mv ./init_file.txt "+benchmark_pre_info_src_path
    os.system(command_1)
    command_2 = "mv ./*.log " + benchmark_pre_info_src_path
    os.system(command_2)
    # tmp_res = os.popen(command)
    # tmp_res.read()
    # print("CREAT_INIT_FILE SUCCESS")
# Pin_set
MAX_INIT = 200
MAX_ADD_PIN = 15

class BRAM:
    def __init__(self):
        self.name = ""
        self.mode = ""
        self.dual = 0
        self.port_a_we = ""
        self.port_b_we = ""
        self.port_a_A = ["" for i in range(MAX_ADD_PIN )]
        self.port_b_A = ["" for i in range(MAX_ADD_PIN )]
class BRAMS:
    def __init__(self):
        self.num = 0
        self.list = []
        for i in range(0, MAX_INIT):  # 构造实例列表s
            self.list.append(BRAM())



def CREAT_INIT_INFO_FILE(benchmark_pre_info_src_path,benchmark,brams,Write):
    net_file_path = benchmark_pre_info_src_path+benchmark+".net"
    init_info_path = benchmark_pre_info_src_path + benchmark +"_init.info"
    net_file = open(net_file_path)
    flag = 0
    for line in net_file:
        if (flag == 1):
            # print(line)
            add_1_begin = line.find("<port name=\"addr1\">")
            add_2_begin = line.find("<port name=\"addr2\">")
            we_1_begin = line.find("<port name=\"we1\">")
            we_2_begin = line.find("<port name=\"we2\">")
            stop_flag = line.find("</inputs>")
            if(add_1_begin!=-1):
                brams.list[brams.num].port_a_A = line[add_1_begin+19:len(line)-8].split()
                # print(brams.list[brams.num].port_a_A)
            elif(add_2_begin!=-1):
                brams.list[brams.num].port_b_A = line[add_2_begin + 19:len(line) - 8].split()
                # print(brams.list[brams.num].port_b_A)
            elif(we_1_begin != -1):
                brams.list[brams.num].port_a_we = line[we_1_begin+17:len(line) - 8]
                # print(line[we_1_begin+17:len(line) - 8])
            elif(we_2_begin != -1):
                brams.list[brams.num].port_b_we = line[we_2_begin + 17:len(line) - 8]
                # print(line[we_2_begin + 17:len(line) - 8])
            elif(stop_flag!=-1):
                brams.num += 1
                flag = 0
        find_pos = line.find("mode=\"mem_")
        if (find_pos != -1):
            name_begin = line.find("name=\"")
            name_end = line.find("\" instance=")
            mode_end = line.find("\">")
            # brams.num += 1
            brams.list[brams.num].name = line[name_begin+6:name_end]
            brams.list[brams.num].mode = line[find_pos+6:mode_end]
            if (brams.list[brams.num].mode.find("dp")!= -1):
                brams.list[brams.num].dual = 1
            flag = 1
            # print(line[name_begin+6:name_end])
            # print(line[find_pos+6:mode_end])
    net_file.close()
    add_pin = set([])
    for i in range(brams.num):
        if (brams.list[i].dual == 0):
            if (len(brams.list[i].port_a_we)>4):
                add_pin.add(brams.list[i].port_a_we)
                for tmp_pin in brams.list[i].port_a_A:
                    if (len(tmp_pin) > 4 ):
                        add_pin.add(tmp_pin)

        else:
            if (len(brams.list[i].port_a_we)>4):
                add_pin.add(brams.list[i].port_a_we)
                for tmp_pin in brams.list[i].port_a_A:
                    if (len(tmp_pin) > 4 ):
                        add_pin.add(tmp_pin)
            if (len(brams.list[i].port_b_we)>4):
                add_pin.add(brams.list[i].port_b_we)
                for tmp_pin in brams.list[i].port_b_A:
                    if (len(tmp_pin) > 4 ):
                        add_pin.add(tmp_pin)
    if(Write == 1):
        init_info = open(init_info_path,'w')
        init_info.write("ALL_ADDRESS_BEGIN\n")
        for tmp_set in add_pin:
            init_info.write(tmp_set+"\n")
        init_info.write("ALL_ADDRESS_END")
        init_info.close()


#Pin_set_2



def CREAT_LOG_PIN_FILE(benchmark_pre_info_src_path,benchmark,brams):
    init_info_path = benchmark_pre_info_src_path + benchmark +"_log_pin.info"
    init_info = open(init_info_path,'w')
    # init_info.write("Begin\n")
    for bram_index in range(brams.num):
        init_info.write("1 "+"BRAM_name "+brams.list[bram_index].name+"\n")
        init_info.write("2 "+"BRAM_mode "+brams.list[bram_index].mode.replace("x","_")+"\n")
        init_info.write("3 "+"BRAM_dual "+str(brams.list[bram_index].dual)+"\n")
        init_info.write("4 "+"Port_A_name "+brams.list[bram_index].port_b_we+"\n")
        for pin in range(MAX_ADD_PIN):
            init_info.write(str(5+pin)+" A["+str(pin)+"] "+brams.list[bram_index].port_a_A[pin]+"\n")
        init_info.write("20 "+"Port_B_name "+brams.list[bram_index].port_b_we+"\n")
        for pin in range(MAX_ADD_PIN):
            # print(str(bram_index) + "--" +str(pin)+"\n")
            init_info.write(str(21+pin)+" B["+str(pin)+"] "+brams.list[bram_index].port_b_A[pin]+"\n")

    # print("")

    # init_info.write("End")
    init_info.close()


# CREAT_INIT_INFO_FILE("/home/zhlab/BRAM/"+E_path+"LU8PEEng/src/pre_info_src/","LU8PEEng",brams)



def CREAT_INFO_FILE(brams,benchmark_src_path,benchmark):
    info_file_path = benchmark_src_path+benchmark+".info"
    info_file = open(info_file_path,'w')
    info_file.write("INIT_BEGIN\n")
    for i in range(brams.num):
        if (brams.list[i].dual == 0):
            if (len(brams.list[i].port_a_we) > 4):
                info_file.write("INIT_NAME\n")
                info_file.write(brams.list[i].name+"\n")
                info_file.write("INIT_MODE\n")
                info_file.write(brams.list[i].mode + "\n")
                info_file.write("WE\n")
                info_file.write(brams.list[i].port_a_we+"\n")
                info_file.write("ADDRESS_BEGIN\n")
                counter = 0
                for tmp_pin in brams.list[i].port_a_A:
                    info_file.write("A[" + str(counter)+ "]=" + tmp_pin + "\n")
                    counter += 1
                info_file.write("ADDRESS_END\n")

        else:
            if (len(brams.list[i].port_a_we) > 4):
                info_file.write("INIT_NAME\n")
                info_file.write(brams.list[i].name+"\n")
                info_file.write("INIT_MODE\n")
                info_file.write(brams.list[i].mode + "\n")
                info_file.write("WE\n")
                info_file.write(brams.list[i].port_a_we+"\n")
                info_file.write("ADDRESS_BEGIN\n")
                counter = 0
                for tmp_pin in brams.list[i].port_a_A:
                    info_file.write("A[" +str(counter)+ "]=" + tmp_pin + "\n")
                    counter += 1
                info_file.write("ADDRESS_END\n")
            if (len(brams.list[i].port_b_we) > 4):
                info_file.write("INIT_NAME\n")
                info_file.write(brams.list[i].name+"\n")
                info_file.write("INIT_MODE\n")
                info_file.write(brams.list[i].mode + "\n")
                info_file.write("WE\n")
                info_file.write(brams.list[i].port_b_we+"\n")
                info_file.write("ADDRESS_BEGIN\n")
                counter = 0
                for tmp_pin in brams.list[i].port_b_A:
                    info_file.write("A["+str(counter)+"]="+tmp_pin+"\n")
                    counter += 1
                info_file.write("ADDRESS_END\n")
    info_file.write("INIT_END\n")
    info_file.close()




if __name__=="__main__":

    if(STAGR == BRAM_log):# 初始化BRAM文件
        # grid_path = sys.argv[2]

        # benchmark_BRAM_path = sys.argv[3]
        benchmark_BRAM_path = "/home/zhlab/BRAM/"+E_path+benchmark+"/res/BRAM/"
        # MEM_COL = int(sys.argv[4])
        MEM_COL = 64
        # MEM_ROW = int(sys.argv[5])
        MEM_ROW = 512

        # print(grid_path)
        # print(benchmark_BRAM_path)
        # print(MEM_COL)
        # print(MEM_ROW)
        CREAT_BRAM_FILE(grid_path, benchmark_BRAM_path, MEM_COL, MEM_ROW)
        # print("END")
    elif(STAGR == Random_input): # 产生随即激励文件
        # get_act_path = sys.argv[2]
        get_act_path = "/home/zhlab/BRAM/ace_test/getact/getPIs"
        # benchmark_res_path = sys.argv[3]
        benchmark_src_path = "/home/zhlab/BRAM/"+E_path+benchmark+"/src/"
        # TEST_NUM = int(sys.argv[4])

        # benchmark = sys.argv[5]
        # benchmark = "LU8PEEng"
        # benchmark_pre_info_src_path = sys.argv[6]
        cmd_del_pin = "rm -rf "+benchmark_src_path + "pin_dict"
        os.system(cmd_del_pin )
        benchmark_pre_info_src_path = "/home/zhlab/BRAM/"+E_path+benchmark+"/src/pre/"
        CREAT_RAND_ACT(get_act_path, benchmark_src_path, TEST_NUM, benchmark, benchmark_pre_info_src_path)
        CORRECTION(benchmark_src_path+"act_pool/",TEST_NUM)
        if (USER == 1):
            MY_CORRECTION(benchmark_src_path + "act_pool/", TEST_NUM,"pglobalreset",0.003,0.003)
            # MY_CORRECTION(benchmark_src_path + "act_pool/", TEST_NUM, "wsiS1_MReset_n", 0.06, 0.06)


    elif (STAGR == Pin_set_1):
        # vtr_release_path = sys.argv[2]
        vtr_release_path = "/home/zhlab/BRAM/vtr/vtr_release/vpr/vpr"
        # benchmark_pre_info_src_path = sys.argv[3]
        benchmark_pre_info_src_path = "/home/zhlab/BRAM/"+E_path+benchmark+"/src/pre/"
        # benchmark = sys.argv[4]
        # benchmark = "LU8PEEng"
        # arch_file_path = sys.argv[5]
        arch_file_path = "/home/zhlab/BRAM/"+E_path+benchmark+"/src/pre/"+arch_name
        CREAT_INIT_FILE(vtr_release_path, benchmark_pre_info_src_path, benchmark, arch_file_path)
        brams = BRAMS()
        CREAT_INIT_INFO_FILE(benchmark_pre_info_src_path, benchmark, brams ,1 )
    elif (STAGR == Pin_set_2):
        # vtr_release_path = sys.argv[2]
        vtr_release_path = "/home/zhlab/BRAM/vtr/vtr_release/vpr/vpr"
        # benchmark_pre_info_src_path = sys.argv[3]
        benchmark_pre_info_src_path = "/home/zhlab/BRAM/"+E_path+benchmark+"/src/pre/"
        # benchmark = sys.argv[4]

        # arch_file_path = sys.argv[5]
        arch_file_path = "/home/zhlab/BRAM/"+E_path+benchmark+"/src/pre/"+arch_name
        # benchmark_src_path = sys.argv[6]
        benchmark_src_path = "/home/zhlab/BRAM/"+E_path+benchmark+"/src/"
        # CREAT_INIT_FILE(vtr_release_path, benchmark_pre_info_src_path, benchmark, arch_file_path)
        brams = BRAMS()
        CREAT_INIT_INFO_FILE(benchmark_pre_info_src_path, benchmark, brams, 0)
        CREAT_INFO_FILE(brams, benchmark_src_path, benchmark)
        CREAT_LOG_PIN_FILE(benchmark_pre_info_src_path, benchmark, brams)