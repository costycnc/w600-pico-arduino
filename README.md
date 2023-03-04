# w600-pico-arduino

https://wiki.seeedstudio.com/Wio-Lite-W600/

               https://files.seeedstudio.com/arduino/package_seeeduino_boards_index.json
               
-------------------------------------------------------------------------------------------------------------------------------------------------               

I have arduino ide 2.0.2 and additional board manager http://arduino.winnermicro.com/arduino/package_wmcom_index.json 

Board manager alternative on my site www.costycnc.it below (because i see that some times the original link not working)

                 https://www.costycnc.it/arduino/package_wmcom_index.json 
                 
 Same board but at another address:
 
 todat 04.03.2023 i insert link bellow and seem that working:
 
 <img width="25%" src="https://github.com/costycnc/w600-pico-arduino/blob/main/img/install-w600.jpg">
 
         https://raw.githubusercontent.com/salmanfarisvp/snippet/master/package_wmcom_index.json
         
         
         
Another board for w600         
         
         http://arduino.w600.fun/package_w600_index.json 
                 

Also i save https://www.costycnc.it/arduino/w600-arduino-0.2.6.zip and https://www.costycnc.it/arduino/wmtools-0.3.2.zip and insert in                                                       C:\Users\yourpc\AppData\Local\Arduino15\packages  but idont know how make working this

also  i see that if I succeed to install package ... give me a little error ... but after install 

the https://developer.arm.com/-/media/Files/downloads/gnu/12.2.rel1/binrel/arm-gnu-toolchain-12.2.rel1-mingw-w64-i686-arm-none-eabi.exe  

              when install check set environment variables 
              
... the error when compiled dissapear but give error when need to upload code to w600

So ... for now i use tool.exe from https://github.com/vshymanskyy/w600tool/releases/tag/0.1 to upload code to w600

         Check in arduino "Show verbose output during x compile and will see the location of img file 
         
 In folder upload from above i create a batch file for windows as example  
 
----------------------------------------------------------------------------------------------------------------------------------------------------------
 
 Here WM_W60X_Firmware Generation Guide V1.2 https://www.winnermicro.com/en/upload/1/editor/1559640549130.pdf 
 
 The w600-pico module (see the prie) https://www.aliexpress.com/item/4000314757449.html have preinstalled micropython http://www.winnermicro.com/upload/1/editor/1568709203932.zip
 
           you can reinstalled firmware micropython with batch from above change file name
           
 official details here https://www.wemos.cc/en/latest/tutorials/w600/get_started_with_micropython_w600.html      
 
 ----------------------------------------------------------------------------------------------------------------------------
 
 and here https://bipes.net.br/aroca/web-serial-terminal/ if want to read from serial port (what send to serial the w600module)
 
 The default bauds serial of w600 (if is not declared) is 115200 
