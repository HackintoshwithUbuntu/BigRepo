class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        a, b = s[:int(len(s)/2)], s[int(len(s)/2):]

        va=0
        for i in a:
            if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u' or i=='A' or i=='E' or i=='I' or i=='O' or i=='U'):
                va=va+1

        vb=0
        for i in b:
            if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u' or i=='A' or i=='E' or i=='I' or i=='O' or i=='U'):
                vb=vb+1

        if vb == va:
            return True
        else:
            return False;