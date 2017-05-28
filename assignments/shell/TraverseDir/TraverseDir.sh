#!/bin/bash
function traverse_dir()
{
 for file in $1/*
 do
  if [ -d $file ]
  then
   traverse_dir $file
  else
   echo $file
  fi
 done
}
traverse_dir $PWD

