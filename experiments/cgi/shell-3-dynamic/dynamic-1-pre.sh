#!/bin/bash

echo "Content-type: text/html"
echo ''

echo "File System status:"

echo "<pre>"

df -h |grep -v Filesystem

echo "</pre>"
