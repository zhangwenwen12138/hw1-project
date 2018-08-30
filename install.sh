#! /bin/bash

apkDir="/temp/apks"

path=""

subDir=""

cd $apkDir

function readDir(){

   cd $apkDir

   filelist=`ls $1`

   for file in $filelist

   do

       installApk $file

   done

}

function installApk(){

   file=$1

   extension="${file##*.}"

   if [ "$extension" = "apk" ]

   then

       adb install $file
       cd /usr/bin              
       ./.apk

   else

       echo "Error:"$file "is not apk file."

   fi

}

readDir $apkDir
