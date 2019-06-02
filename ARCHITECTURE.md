# 架构描述文件



BlueBlood-OS为经典的类UnixOS

OS包括应用层和内核层

/sys/kernel ,app , tools   三个文件

如下图

![image-20190603041716395](https://github.com/shaojintian/BlueBlood-OS/tree/master/imgs/typora-user-images/image-20190603041716395.png)

下述的文件名均与项目中的文件名严格一致

## 内核层kernel

![image-20190603043114779](https://github.com/shaojintian/BlueBlood-OS/tree/master/imgs/typora-user-images/image-20190603043114779.png)

内核层由5个子系统组成

1:memorysys内存管理

2:process 进程调度

3:ipc  进程间通信

4:filesys 文件系统

5:netsys 网络及驱动



# 应用层app

1:api api管理







# 工具tools



