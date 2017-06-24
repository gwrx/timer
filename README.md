# timer
a simple cli timer

A cli egg timer that informs you about the time remaining every time/2.


Today I needed a simple timer because I was cooking rice and had to wait 10 minutes and couldn't find any counter/timer on my computer or in the ubuntu/debian repositories. All I could find was much complexer as needed, so I built one myself.


### INSTALL

> git clone github.com:gwrx/timer.git
>
> cd timer/
>
> make
>
> sudo make install


### USAGE

timer [value] [s/m/h] [message]

value is the value to count down

s/m/h indicates if you mean seconds, minutes or hours

message is just the message displayed at the end


### WARNING
This is by means not completed, and will never be. This is for testing purposes only and you run it at your own responsibility. Don't expect to work properly!


### NOTES
Due to simplicity, there is a really simple method implemented to overcome rounding errors because of the divider. Therefore, depending on the starting value, the counter is 1 second off.
