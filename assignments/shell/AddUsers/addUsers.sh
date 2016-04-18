#!/bin/bash
#  遍历文件目录下所有的文件，并打印打印普通文件，才有深度优先搜索方法
#  递归调用函数
filesearch()
{
    
    filename2=(`ls`)	
    for b  in ${filename2[*]}
    do 	
        if [ -d $b ]
        then
           cd $b	
             filesearch $b
           cd .. 
        else
           echo  "$b"	  
        fi
    done
}
firstsearch(){
    filename1=(`ls`)	
    for a  in ${filename1[*]}
    do 
      if [ -d $a ]
      then 
        
         cd $a
            filesearch $a 
         cd ..         
      else 
         echo  "$a"
      fi 
   done
}

firstsearch
