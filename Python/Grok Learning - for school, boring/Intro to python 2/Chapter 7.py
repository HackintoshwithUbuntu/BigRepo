def find_middle(a, b, c):
  List = [a,b,c]
  return(sorted(List)[1])





def eng2chef(string):
  if 'tion' in string:
    string = string.replace('tion','shun')
  if 'an' in string:
    string = string.replace('an','un')
  if 'th' in string:
    string = string.replace('th','z')
  if 'v' in string:
    string = string.replace('v','f')
  if 'w' in string:
    string = string.replace('w','v')
  if 'c' in string:
    string = string.replace('c','k')
  if 'o' in string:
    string = string.replace('o','oo')
  if 'i' in string:
    string = string.replace('i','ee')
  List = list(string)
  if List[-1] == '!':
    List[-1] = ('. bork bork bork!!')
  return(''.join(List))





def words2number(s):
  s = s.replace('zero','0')
  s = s.replace('one','1')
  s = s.replace('two','2')
  s = s.replace('three','3')
  s = s.replace('four','4')
  s = s.replace('five','5')
  s = s.replace('six','6')
  s = s.replace('seven','7')
  s = s.replace('eight','8')
  s = s.replace('nine','9').split()
  s = ''.join(s)
  return int(s)





def fix_yz(s):
  s=s.replace('z','$$IfYoUsEeThIsItIssAbbUUUuug$$')
  s=s.replace('Z','$$IfYoUsEeThIsItIssAbbUUUuuug$$')
  s=s.replace('y','z')
  s=s.replace('Y','Z')
  s=s.replace('$$IfZoUsEeThIsItIssAbbUUUuug$$','y')
  s=s.replace('$$IfZoUsEeThIsItIssAbbUUUuuug$$', 'Y')
  return(s)