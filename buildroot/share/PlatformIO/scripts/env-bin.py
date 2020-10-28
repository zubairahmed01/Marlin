Import("env")

env.Replace(PROGNAME="%s-firmware" % env['PIOENV'])
