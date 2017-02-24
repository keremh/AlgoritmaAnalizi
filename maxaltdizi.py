def maxAltDizi(dizi):
      
    runSum = maxToplam = dizi[0]
    i = 0
    start = finish = 0

    for j in range(1, len(dizi)):
    	if dizi[j] > (runSum + dizi[j]):
            runSum = dizi[j]
            i = j
        else:
            runSum += dizi[j]

        if runSum > maxToplam:
            maxToplam = runSum
            start = i
            finish = j

    print "maxToplam =>", maxToplam

maxAltDizi([-1, 2, -3, 3, -2, 6, 3, -5])
