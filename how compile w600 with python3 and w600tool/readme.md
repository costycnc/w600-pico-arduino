go in C:\Users\user\AppData\Local\Arduino15\packages\w600\tools\wmtools\0.3.2 

insert wmtool.py folder

open file wmtool.bat in editor

add at end of file :

      echo final=====%armgcc_BIN_FILE_PATH%
      rem python3 %WORK_PATH%\w600tool.py -e -u %armgcc_BIN_FILE_PATH:.objcopy.bin=.fls%
      python3 %WORK_PATH%\w600tool.py -u %armgcc_BIN_FILE_PATH:.bin=.img%

need to have python3 installed and add in environment variables
