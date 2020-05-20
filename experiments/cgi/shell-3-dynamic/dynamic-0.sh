#!/bin/bash

echo "Content-type: text/html"
echo ''

echo "File System status:"

df -h |grep -v Filesystem
