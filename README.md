# tools
|tool id|file name|description|
|:-:|:-:|:-:|
|0|time_mem.py|统计某个软件的的时间和内存峰值，可处理多线程多进程。|
|1|quN.cpp|去掉数据中的简并碱基|
|2|dotplot.py|对maf或者fasta中两条序列作比对分布图|
|3|maf-tongji.py|统计maf格式多基因组比对结果的M-score|
|4|fasta-tongji.cpp|统计fast格式多序列比对结果的M-score|
|5|maf-tree/|对maf比对结果构建M-score的相似性矩阵|
|6|jhtree.py|依据相似性矩阵构建进化树并画图|
|7|simulate.py|生成带有模拟结构变异的基因组数据，且带有sv.maf标准答案。|
|8|r.py|去除文件夹中所有文件的'\r'。（Cactus无法处理这些字符）|
|9|xmfa2maf.cpp|将xmfa格式转为maf格式|
|10|delta2maf.py|mummer软件输出结果为delta格式，将其转为maf格式|
|11|split-maf/|将maf中具有多条序列的block拆分成只有中心序列和一条非中心序列的2条形式|
|12|maf-filter/|对maf结果依据block中序列数量，block长度，连续度三个指标进行筛选|
|13|ref-sort-maf/|依据block中某条序列对maf文件重新排序|
|14|shiyan1.py|实验1作图|
|15|shiyan2.py|实验2作图|
|16|shiyan4.py|实验4作图|
|17|cov100w.py|对100w条新冠序列M-score作数据分布直方图|
|18|fast_read_file/|不读入内存的，磁盘快速读取txt文件模块|


# data
## dataset1---18人全基因组数据
| i |	Assembly Accession |	Assembly Name |	Download Link |
|:-:|:-:|:-:|-|
|1|GCA_009914755.4|CHM13_T2T_v2.0|https://s3-us-west-2.amazonaws.com/human-pangenomics/T2T/CHM13/assemblies/analysis_set/chm13v2.0.fa.gz|
|2|GCA_000001405.28|GRCh38.p13|https://ftp.ncbi.nlm.nih.gov/genomes/all/GCA/000/001/405/GCA_000001405.28_GRCh38.p13/GCA_000001405.28_GRCh38.p13_assembly_structure/Primary_Assembly/assembled_chromosomes/FASTA/|
|3|GCA_011064465.1|Ash1.7|https://ftp.ncbi.nlm.nih.gov/genomes/all/GCA/011/064/465/GCA_011064465.1_Ash1.7/GCA_011064465.1_Ash1.7_assembly_structure/Primary_Assembly/assembled_chromosomes/FASTA/|
|4|GCA_002180035.3|HG00514_prelim_3.0|https://ftp.ncbi.nlm.nih.gov/genomes/all/GCA/002/180/035/GCA_002180035.3_HG00514_prelim_3.0/GCA_002180035.3_HG00514_prelim_3.0_assembly_structure/Primary_Assembly/assembled_chromosomes/FASTA/|
|5|GCA_001524155.4|NA19240_prelim_3.0|https://ftp.ncbi.nlm.nih.gov/genomes/all/GCA/001/524/155/GCA_001524155.4_NA19240_prelim_3.0/GCA_001524155.4_NA19240_prelim_3.0_assembly_structure/Primary_Assembly/assembled_chromosomes/FASTA/|
|6|GCA_003634875.1|HG00733_Phased_Diploid_phase0|https://ftp.ncbi.nlm.nih.gov/genomes/all/GCA/003/634/875/GCA_003634875.1_HG00733_Phased_Diploid/GCA_003634875.1_HG00733_Phased_Diploid_assembly_structure/phase0/assembled_chromosomes/FASTA/|
|7|GCA_014905855.1|ASM1490585v1|https://ftp.ncbi.nlm.nih.gov/genomes/all/GCA/014/905/855/GCA_014905855.1_ASM1490585v1/GCA_014905855.1_ASM1490585v1_assembly_structure/Primary_Assembly/assembled_chromosomes/FASTA/|
|8|GCA_002077035.3|NA12878_prelim_3.0|https://ftp.ncbi.nlm.nih.gov/genomes/all/GCA/002/077/035/GCA_002077035.3_NA12878_prelim_3.0/GCA_002077035.3_NA12878_prelim_3.0_assembly_structure/Primary_Assembly/assembled_chromosomes/FASTA/|
|9|GCA_016700455.2|mHomSap3.pat|https://ftp.ncbi.nlm.nih.gov/genomes/all/GCA/016/700/455/GCA_016700455.2_mHomSap3.pat/GCA_016700455.2_mHomSap3.pat_assembly_structure/Primary_Assembly/assembled_chromosomes/FASTA/|
|10|GCA_016695395.2|mHomSap3.mat|https://ftp.ncbi.nlm.nih.gov/genomes/all/GCA/016/695/395/GCA_016695395.2_mHomSap3.mat/GCA_016695395.2_mHomSap3.mat_assembly_structure/Primary_Assembly/assembled_chromosomes/FASTA/|
|11|GCA_015476435.1|HC1-N|https://ftp.ncbi.nlm.nih.gov/genomes/all/GCA/015/476/435/GCA_015476435.1_HC1-N/GCA_015476435.1_HC1-N_assembly_structure/Primary_Assembly/assembled_chromosomes/FASTA/|
|12|GCA_001292825.2|HS1011_v1.1|https://ftp.ncbi.nlm.nih.gov/genomes/all/GCA/001/292/825/GCA_001292825.2_HS1011_v1.1/GCA_001292825.2_HS1011_v1.1_assembly_structure/Primary_Assembly/assembled_chromosomes/FASTA/|
|13|GCA_000306695.2|CHM1_1.1|https://ftp.ncbi.nlm.nih.gov/genomes/all/GCA/000/306/695/GCA_000306695.2_CHM1_1.1/GCA_000306695.2_CHM1_1.1_assembly_structure/Primary_Assembly/assembled_chromosomes/FASTA/|
|14|GCA_000002125.2|HuRef|https://ftp.ncbi.nlm.nih.gov/genomes/all/GCA/000/002/125/GCA_000002125.2_HuRef/GCA_000002125.2_HuRef_assembly_structure/Primary_Assembly/assembled_chromosomes/FASTA/|
|15|GCA_000212995.1|HuRefPrime|https://ftp.ncbi.nlm.nih.gov/genomes/all/GCA/000/212/995/GCA_000212995.1_HuRefPrime/GCA_000212995.1_HuRefPrime_assembly_structure/Primary_Assembly/assembled_chromosomes/FASTA/|
|16|GCA_003634875.1|HG00733_Phased_Diploid_phase1|https://ftp.ncbi.nlm.nih.gov/genomes/all/GCA/003/634/875/GCA_003634875.1_HG00733_Phased_Diploid/GCA_003634875.1_HG00733_Phased_Diploid_assembly_structure/phase1/assembled_chromosomes/FASTA/|
|17|GCA_001712695.1|KOREF1.0|https://ftp.ncbi.nlm.nih.gov/genomes/all/GCA/001/712/695/GCA_001712695.1_KOREF1.0/GCA_001712695.1_KOREF1.0_assembly_structure/Primary_Assembly/assembled_chromosomes/FASTA/|
|18|GCA_000002115.2|WGSA|https://ftp.ncbi.nlm.nih.gov/genomes/all/GCA/000/002/115/GCA_000002115.2_WGSA/GCA_000002115.2_WGSA_assembly_structure/Primary_Assembly/assembled_chromosomes/FASTA/|

## dataset2---小基因组数据
|Dataset|Sequences number|Mean length(without N)|Mean length(with N)|数据大小/MB|Download link|
|:-:|:-:|:-:|:-:|:-:|:-:|
|Mitochondrial-genome|672|16,568|16,568|10.6|http://lab.malab.cn/soft/halign/data/mt1x.zip|
|Neisseria-meningitidis|5|2,190,088|2,190,088|10.4||
|Streptococcus-pneumoniae|11|2,138,975|2,139,054|22.4||
|Escherichia-coil|30|5,060,511|5,060,749|144.8||
|3Human-chromosome-1|3|231,424,778|231,424,778|662.1||








