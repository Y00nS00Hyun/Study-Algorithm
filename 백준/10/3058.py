for _ in range(int(input())): #input회 만큼 진행 -> range 는 숫자 담는 함수
    soohyun=list(map(int, input().split())) #soohyun list 에 담기
    even=[] #짝수 배열 만들기
    for n in soohyun: #n회동안 soohyun list 에서
        if n % 2==0: #짝수인것들만 골라서
            even.append(n) #even 배열에 넣고
    print(sum(even), min(even)) #출력
