#!/bin/sh

cat /COPYRIGHT > /pubsub/0000000000000000000000000000000000000000000000000000000000000000/0359675406956079358359646749623905850546897932873495685695456999
psirptest -s -r 0359675406956079358359646749623905850546897932873495685695456999 -f 0359675406956079358359646749623905850546897932873495685695456999.txt
diff -q /COPYRIGHT 0359675406956079358359646749623905850546897932873495685695456999.txt
rm 0359675406956079358359646749623905850546897932873495685695456999.txt