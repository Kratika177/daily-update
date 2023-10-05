M1=3
C1=3
M2=0
C2=0
print("Initial State = (3M, 3C,Bank-1)")
print("Goal state = (3M, 3C, Bank-1 )")
while((M2!=3) or (C2!=3)):
  r=int(input("Enter rule"))
  if(r==1):
    M1-=1
    M2+=1
  elif(r==2):
    M1-=2
    M2+=2
  elif(r==3):
    M1-=1
    C1-=1
    M2+=1
    C2+=1
  elif(r==4):
    c1-=1
    C2+=1
  elif(r==5):
    C1-=2
    C2+=2
  elif(r==6):
    M1+=1
    M2-=1
  elif(r==7):
    M1+=2
    M2-=2
  elif(r==8):
    M1+=1
    C1+=1
    M2-=1
    C2-=1
  elif(r==9):
    C1+=1
    C2-=1
  elif(r==10):
    C1+=2
    C2-=2
  print(M1,C1)
  print(M2,C2)
  if((M1>0 and M1<C1) or (M2>0 and M2<C2)):
    print("dead")
    break
