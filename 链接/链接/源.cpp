//gcc默认动态链接
//动态链接就相当于小a，每一次有上网需求就要去网吧（效率低，对库的依赖性太高，可执行程序体积小）
//静态链接相当于小b，把电脑拷贝了一份（效率高，代码膨胀，但不依赖任何第三方库）
//静态程序具有良好的可移植性（相同的平台）
//ldd+exe(依赖的库) .so动态库 .a静态库 libc.xx
//ctrl r：gcc
//依赖关系 依赖方法 伪目标总是被执行的
//make是命令 makefile是文件 文件里放依赖关系和依赖方法 目标文件：依赖文件 伪目标总是被执行的 依赖方法总是以tab开头的
//伪目标不关注时间所以总是被执行
//stdin stdout stderr
//存储器指的是内存
//搞管理：先描述在组织
//程序计数器（pc/ip）：这个寄存器存放当前正在执行指令的下一条指令的地址
//kill -9 3377  ps aux | head -l && ps aux 