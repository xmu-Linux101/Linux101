# Shell 脚本 练习指南

## 实验目的
本练习的目标是编写一个Shell 脚本用于在Linux下批量创建用户。

## 实验要求

## 实验环境
- Linux（Ubuntu、Debian等）
- 能切换到root权限

## 实验步骤
1. 将本仓库fork到自己的账户下
2. 将自己账户下的Linux101-assignment仓库clone到本地电脑
3. 找到shell/AddUsers目录，查看练习所用到的文件
	1. README.md 本说明文件
	2. users.txt 包含用户名的文件
	3. addUsers.sh 需要自己完成编写的脚本文件（文件已经列出可以用到的命令）
4. 用学到的Shell 脚本编程知识完成练习
	1. 在工作目录下git branch 检查当前的分支情况（会发现现在只有master分支)
	2. git checkout -b change_first_line 定义一个新的分支并转入这个新的分支进行工作
	3. 修改addUsers.sh，添加第一行应该有的定义
	4. git commit -a 提交刚才的修改，并写注解
	5. git push 把刚才的工作发回服务器
	6. 在GitHub仓库"首页"里找到"Compare & pull request",点击这个绿色按钮
	7. 书写一些相关的comment，并提交（绿色按钮）
	8. 项目管理者（本实验中还是你自己）就可以看到一个"Merge pull request"的按钮
	9. 点击这个Merge按钮，就可以把新分支上的改变合并到Master分支上。
	10. 分支合并后，可以根据项目管理需求来决定是否把目前这个分支删除（点击Delete branch按钮)
		- 如果该分支要完成的功能已经完成，要结束分支，就可以删除
		- 如果该分支还有后续工作要做，就不删除；后续可以继续修改、提交、push、pull request
