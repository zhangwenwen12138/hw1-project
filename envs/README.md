# hw1-project
工程化软件项目作业题
=========================

### 要求：
1. 构建一个可执行程序服务，在init.rc里启动
2. 服务通过Binder提供IPC接口
3. 构建一个APK，调用服务的的IPC接口
4. 重点考察工程建立，如果时间来不及代码部分优先级可降低

### 编译流程：
1. source env/env_android27.sh
2. build.sh
3. install.sh

### 目录文件简介:
* envs：设置平台环境变量
* platform-tool：存放不同平台的依赖文件如工具链，库，脚本，配置文件等
* src:存放源码
* dist:存放编译结果
* build.sh:编译脚本
* install.sh:安装脚本，安装你的程序到模拟器

### 交作业流程:
1. Fork本项目
2. 建立自己组名的分支，修改完成作业
3. 发Pull Request到本项目，注意：推送到组名分支而非Master

### 提示:
1. 修改init.rc可以自己下载AOSP的源码编译，也可以从AVD下载然后修改。修改的主要思路是解包img文件，修改，重新打包。注意，未经过修改的img或者下载的img属于其他项目预发布或者包管理器管理的部分，修改img文件的过程也是构建的一部分。
2. 在env/env_android27.sh中设置环境变量后，在makefile系统中读取，如gcc的路径，依赖库的目录，包管理器的分支等。这种方法可以确保你的makefile跟具体的平台无关。
3. 最简单的获取工具链的方法是使用NDK的make-standalone-toolchain工具，如果你想挑战，也可以从AOSP里提取或者直接使用NDK（需要额外设置一些参数）。