songList=open('songlist.txt').read().split('\n')
songList.pop()
songList.reverse()
songs=int(input('How many more songs? '))
for song in range(songs):
  print(songList[song])






import collections
mailList=open('mail.txt').read().split('\n')
lttr=collections.defaultdict(int)
pckg=collections.defaultdict(int)
for line in mailList:
  List = line.split(',')
  if line[-1:] == 'r':
    lttr[List[0]] += 1
  if line[-1:] == 'e':
    pckg[List[0]] += 1

user=input('Name: ')
amountP = pckg[user]
amountL = lttr[user]
for loop in range(1):
  if amountP == 0 and amountL == 0:
    print('No mail')
    break
  if amountL == 0:
    print('No Letters')
  elif amountL >= 2:
    print(amountL,'Letters')
  else:
    print('1 Letter')
  if amountP == 0:
    print('No Packages')
  elif amountP >= 2:
    print(amountP,'Packages')
  else:
    print('1 Package')





guess=0
mistakes=0
counter=0
end=False
while guess!=42 and counter!=10:
  counter=counter+1
  guess=int(input('Guess a multiple of 7: '))
  if guess%7!=0:
    mistakes+=1
    if mistakes==2:
      print('Another mistake. Too bad.\nThat was fun.')
      end=True
      break
    elif mistakes==1:
      print("Mistake! That number isn't a multiple of 7.")
      continue
    else:
      print('Nope!')
      continue
  elif guess!=42:
    print('Nope!')
if counter!=10 and end==False:
    print('You won!\nThat was fun.')
elif counter==10:
  print('No guesses left!\nThat was fun.')




from collections import Counter
import string
tweet=input('Tweet: ')
lis=tweet.lower().strip().split()
lis_hash=[]

while tweet:
  for i in lis:
    i=i.rstrip(string.punctuation)
    if i!='' and i[0]=='#':
      lis_hash.append(i)
  tweet=input('Tweet: ')
  lis=tweet.lower().strip().split()

ans=Counter(lis_hash)
for i in ans:
  print(i,ans[i])
