# Pi temperature monitor

By BRH for DUNCHA France.

This Program monitors your raspberry pi 3B CPU's temperature. 

# Usage

Clone this repo and cd in it.

Then run 
```
make
```

the program should compile and run, then clear automatically

or compile it youself as it is very simple :

```
g++ main.cpp -o main
./main
```

# if you want to use it as a regular CLI binary command

Compile the program using :

```
g++ main.cpp -o piTemperatureMonitor
```

then move the binary into a binary folder vailible to your $PATH :

```
mv piTemperatureMonitor /bin/piTemperatureMonitor
```

You can now call the command :

```
piTemperatureMonitor
```
