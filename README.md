# guitar_clip_effect
Basic guitar clip effect

#compile
gcc --std=c99 -o effect effect.c

# usage

arecord -D plughw:CARD=Adapter,DEV=0 -f cd | ./effect {limit} | aplay -D default -f cd
