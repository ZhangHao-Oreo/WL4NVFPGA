#-*-coding:utf-8-*-
import os
def CARLL_ACE(benchmark_src_path,benchmark,benchmark_pre_info_src_path,ace_path,TEST_NUM):
    benchmark_blif = benchmark_pre_info_src_path+benchmark+".blif"
    benchmark_blif_ = benchmark_pre_info_src_path+benchmark+"_.blif"

    ace_pool_path = benchmark_src_path + "ace_pool/"
    aceout_pool_path = benchmark_src_path + "aceout_pool/"
    # mk_empt_file_command = "touch " + aceout_pool_path +"empt"
    # print(mk_empt_file_command)
    # os.system(mk_empt_file_command)
    for i in range(0, TEST_NUM):
        file_list = os.listdir(aceout_pool_path)
        file_name = str(i)+".out"
        if(file_list.count(file_name) == 0):
            print("ID ----- "+ str(i))
            out_path = aceout_pool_path+ str(i) + ".out"
            act_path = benchmark_src_path + "act_pool/" + str(i) + ".act"
            ace_cmd = ace_path + " -b " + benchmark_blif + " -n " + benchmark_blif_ + " -a " + act_path + ">" + out_path
            os.system(ace_cmd)
            add_path_old = benchmark_src_path + "act_pool/" + str(i) + ".ace"
            add_path_new = ace_pool_path + str(i) + ".ace"
            mv_command = "mv " + add_path_old + " " + add_path_new
            os.system(mv_command)

if __name__=="__main__":

    # 实验序号
    E_0 = 0  # 细粒度写均衡
    E_1 = 1  # 粗粒度写均衡
    E_2 = 2  # 传统策略写均衡
    E_3 = 3  # 不加写均衡

    # # # # # # # # # #
    E = 0


    E_path = "e_0/"

    # amp_num 为写放大系数

    benchmark = "B5" #"boundtop"
    # benchmark =  "B1" #"LU8PEEng"
    # benchmark =  #"LU32PEEng"
    # benchmark =  "mcml"
    # benchmark =  "mkDelayWorker32B"
    # benchmark = "B2" #"mkPktMerge"
    # benchmark = "B4"# "mkSMAdapter4B"
    # benchmark = "B0" # "or1200"


    CARLL_ACE("/home/zhlab/BRAM/" +E_path+benchmark+"/src/",benchmark,"/home/zhlab/BRAM/" +E_path+benchmark+"/src/pre/","/home/zhlab/BRAM/vtr/vtr_ace_0/ace2/ace",1000)