Solution:

I copied the existing config file from my current working kernel (found in
/boot in my case). I ran menuconfig and saved and exited without making any
changes. Then I compiled the kernel, installed it and saved the config file for
future use.

Issues:

Kernel was not booting up - I added the `depmod` line to the build process,
although I am not sure if it was the reason in the first place. After
scourging the internet and trying multiple solutions, I narrowed the problem
down to the Nvidia drivers I was currently using. I switched from using Nvidia
drivers to using nouveau drivers (using Ubuntu's *Software and Updates* app)
then rebooted, copied the config file from /boot and redid the process and
this time it booted.

Steps:

```
git clone https://github.com/torvalds/linux
cd linux
cp /boot/config-$(uname -r) .config
make menuconfig
make -j8
sudo depmod -a
sudo make modules_install
sudo make install
```
