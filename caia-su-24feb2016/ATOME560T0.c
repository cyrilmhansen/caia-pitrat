#include "dx.h"
void ATOME560T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V20=0,V15=0,V17=0,V14=0,V39=0,V41=0,V49=0,V42=0,V47=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=40;
x[jvj+1]=20560;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3851&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=R; pile[WZ1]=jvj+10; 
(*f[1363])( );     /*VAROBJ0(R,jvj+10)*/
for(i=x[jvj+10],V19=0;i>0;i=t[i],V19++)  ;
if((V19!=2)) goto l8;
x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+11,V20)*/
V20=pile[WZ2]; 
x[jvj+37]=x[jvj+10] ;z[jvj+37]=z[jvj+10];
l2:if((x[jvj+37]<=0)) goto l8;
x[jvj+12]=s[x[jvj+37]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+37];
pile[v[22]]=202; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[1950])( );if(v[102]) goto l3;     /*FNDOND0(202,jvj+12,jvj+13)*/
if((x[jvj+13]!=68)) goto l3;
pile[v[22]]=365; pile[WZ2]=jvj+14; 
(*f[1971])( );     /*FNDEND0(365,jvj+12,jvj+14)*/
for(i=x[jvj+14],V15=0;i>0;i=t[i],V15++)  ;
x[jvj+38]=x[jvj+10] ;z[jvj+38]=z[jvj+10];
l4:if((x[jvj+38]<=0)) goto l3;
x[jvj+5]=s[x[jvj+38]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+38];
if((x[jvj+5]==x[jvj+12])) goto l5;
pile[v[22]]=202; pile[WZ1]=jvj+5; pile[WZ2]=jvj+15; 
(*f[1950])( );if(v[102]) goto l5;     /*FNDOND0(202,jvj+5,jvj+15)*/
if((x[jvj+15]!=68)) goto l5;
pile[v[22]]=365; pile[WZ2]=jvj+16; 
(*f[1971])( );     /*FNDEND0(365,jvj+5,jvj+16)*/
for(i=x[jvj+16],V17=0;i>0;i=t[i],V17++)  ;
V14=V15*V17;
if((V14>=200)) goto l5;
x[jvj+39]=x[jvj+14] ;z[jvj+39]=z[jvj+14];
l6:if((x[jvj+39]<=0)) goto l5;
x[jvj+17]=s[x[jvj+39]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+39];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[1974])( );if(v[102]) goto l7;     /*INVEXP0(jvj+17,jvj+18)*/
pile[v[22]]=jvj+12; pile[WZ2]=R; pile[WZ3]=jvj+4; 
(*f[1721])( );     /*SUBSTITUTES0(jvj+12,jvj+18,R,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+17,jvj+26)*/
if((x[jvj+33]=w[x[jvj+26]][3])==incon) goto l9;
x[jvj+29]=0 ;z[jvj+29]=0;
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(365,jvj+5,jvj+27)*/
l10:if((x[jvj+27]>0)) goto l11;
x[jvj+40]=x[jvj+29] ;z[jvj+40]=z[jvj+29];
x[jvj+36]=x[jvj+40] ;z[jvj+36]=z[jvj+40];
l1:if((x[jvj+36]<=0)) goto l9;
x[jvj+2]=s[x[jvj+36]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+36];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[1974])( );if(v[102]) goto l7;     /*INVEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+5; pile[WZ2]=jvj+4; pile[WZ3]=jvj+6; 
(*f[1721])( );     /*SUBSTITUTES0(jvj+5,jvj+3,jvj+4,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[965])( );if(v[102]) goto l7;     /*NORM0(jvj+6,jvj+7)*/
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=134)) goto l7;
x[jvj+36]=t[x[jvj+36]];
goto l1;
l3:x[jvj+37]=t[x[jvj+37]];
goto l2;
l5:x[jvj+38]=t[x[jvj+38]];
goto l4;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l9:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+24)*/
pile[v[22]]=V20; pile[WZ1]=858; pile[WZ2]=jvj+20; 
(*f[46])( );     /*TRI0(V20,858,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,v[13],642,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=3851; pile[WZ2]=246; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,3851,246,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=20560; pile[WZ2]=218; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+22,20560,218,jvj+23)*/
pile[v[22]]=jvj+24; pile[WZ1]=(-20); pile[WZ2]=jvj+23; pile[WZ3]=159; pile[WZ4]=jvj+25; 
(*f[298])( );     /*TRIENS1(jvj+24,(-20),jvj+23,159,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+25,1,158,jvj+19)*/
pile[v[22]]=365; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[1571])( );     /*DELIER0(365,jvj+12,jvj+17,jvj+19)*/
l7:x[jvj+39]=t[x[jvj+39]];
goto l6;
l11:x[jvj+30]=s[x[jvj+27]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+27];
pile[v[22]]=688; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(688,jvj+17,V39)*/
V39=pile[WZ2]; 
if((V39==1)) goto l16;
l12:pile[v[22]]=921; pile[WZ1]=jvj+12; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(921,jvj+12,jvj+28)*/
for(a=x[jvj+28];a>0;a=t[a]) if(s[a]==x[jvj+5]) goto l16;
l13:pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[68])( );     /*PLUE0(jvj+29,jvj+30)*/
l14:x[jvj+27]=t[x[jvj+27]];
goto l10;
l16:pile[v[22]]=jvj+30; pile[WZ1]=jvj+33; pile[WZ3]=jvj+35; 
(*f[45])( );if(v[102]) goto l15;     /*FNDZ0(jvj+30,jvj+33,V47,jvj+35)*/
V47=pile[WZ2]; 
V42=V47;
pile[v[22]]=jvj+17; pile[WZ3]=jvj+34; 
(*f[45])( );if(v[102]) goto l15;     /*FNDZ0(jvj+17,jvj+33,V49,jvj+34)*/
V49=pile[WZ2]; 
V41=V49;
if((V42!=V41)) goto l13;
l15:pile[v[22]]=498; pile[WZ1]=jvj+30; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(498,jvj+30,jvj+32)*/
pile[WZ1]=jvj+17; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(498,jvj+17,jvj+31)*/
if((x[jvj+32]!=x[jvj+31])) goto l13;
goto l14;
}
