#include "dx.h"
void ATOME561T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,V17=0,V20=0,V15=0,V14=0,V40=0,V42=0,V50=0,V43=0,V48=0;
int W;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=40;
x[jvj+1]=20561;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3944&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
W=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=202; pile[WZ1]=W; pile[WZ2]=jvj+9; 
(*f[1950])( );if(v[102]) goto l9;     /*FNDOND0(202,W,jvj+9)*/
if((x[jvj+9]!=68)) goto l9;
x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+10,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=365; pile[WZ1]=W; pile[WZ2]=jvj+11; 
(*f[1971])( );     /*FNDEND0(365,W,jvj+11)*/
for(i=x[jvj+11],V17=0;i>0;i=t[i],V17++)  ;
pile[v[22]]=509; pile[WZ2]=jvj+12; 
(*f[1971])( );     /*FNDEND0(509,W,jvj+12)*/
l2:if((x[jvj+12]<=0)) goto l9;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[1363])( );     /*VAROBJ0(jvj+13,jvj+14)*/
for(i=x[jvj+14],V20=0;i>0;i=t[i],V20++)  ;
if((V20!=2)) goto l3;
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==x[W]) goto l5;
l3:x[jvj+12]=t[x[jvj+12]];
goto l2;
l5:x[jvj+38]=x[jvj+14] ;z[jvj+38]=z[jvj+14];
l4:if((x[jvj+38]<=0)) goto l3;
x[jvj+15]=s[x[jvj+38]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+38];
if((x[W]==x[jvj+15])) goto l6;
pile[v[22]]=202; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[1950])( );if(v[102]) goto l6;     /*FNDOND0(202,jvj+15,jvj+16)*/
if((x[jvj+16]!=68)) goto l6;
pile[v[22]]=365; pile[WZ2]=jvj+17; 
(*f[1971])( );     /*FNDEND0(365,jvj+15,jvj+17)*/
for(i=x[jvj+17],V15=0;i>0;i=t[i],V15++)  ;
V14=V15*V17;
if((V14>=200)) goto l6;
x[jvj+39]=x[jvj+17] ;z[jvj+39]=z[jvj+17];
l7:if((x[jvj+39]<=0)) goto l6;
x[jvj+18]=s[x[jvj+39]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+39];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[1974])( );if(v[102]) goto l8;     /*INVEXP0(jvj+18,jvj+19)*/
pile[v[22]]=jvj+15; pile[WZ2]=jvj+13; pile[WZ3]=jvj+4; 
(*f[1721])( );     /*SUBSTITUTES0(jvj+15,jvj+19,jvj+13,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+18,jvj+27)*/
if((x[jvj+34]=w[x[jvj+27]][3])==incon) goto l10;
x[jvj+30]=0 ;z[jvj+30]=0;
pile[v[22]]=365; pile[WZ1]=W; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(365,W,jvj+28)*/
l11:if((x[jvj+28]>0)) goto l12;
x[jvj+40]=x[jvj+30] ;z[jvj+40]=z[jvj+30];
x[jvj+37]=x[jvj+40] ;z[jvj+37]=z[jvj+40];
l1:if((x[jvj+37]<=0)) goto l10;
x[jvj+2]=s[x[jvj+37]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+37];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[1974])( );if(v[102]) goto l8;     /*INVEXP0(jvj+2,jvj+3)*/
pile[v[22]]=W; pile[WZ2]=jvj+4; pile[WZ3]=jvj+5; 
(*f[1721])( );     /*SUBSTITUTES0(W,jvj+3,jvj+4,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[965])( );if(v[102]) goto l8;     /*NORM0(jvj+5,jvj+6)*/
x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=134)) goto l8;
x[jvj+37]=t[x[jvj+37]];
goto l1;
l6:x[jvj+38]=t[x[jvj+38]];
goto l4;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l10:pile[v[22]]=101; pile[WZ1]=W; pile[WZ2]=110; pile[WZ3]=(-622); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(101,W,110,(-622),jvj+25)*/
pile[v[22]]=V21; pile[WZ1]=858; pile[WZ2]=jvj+21; 
(*f[46])( );     /*TRI0(V21,858,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,v[13],642,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=3944; pile[WZ2]=246; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,3944,246,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=20561; pile[WZ2]=218; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+23,20561,218,jvj+24)*/
pile[v[22]]=jvj+25; pile[WZ1]=(-20); pile[WZ2]=jvj+24; pile[WZ3]=159; pile[WZ4]=jvj+26; 
(*f[298])( );     /*TRIENS1(jvj+25,(-20),jvj+24,159,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+26,1,158,jvj+20)*/
pile[v[22]]=365; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[1571])( );     /*DELIER0(365,jvj+15,jvj+18,jvj+20)*/
l8:x[jvj+39]=t[x[jvj+39]];
goto l7;
l12:x[jvj+31]=s[x[jvj+28]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+28];
pile[v[22]]=688; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(688,jvj+18,V40)*/
V40=pile[WZ2]; 
if((V40==1)) goto l17;
l13:pile[v[22]]=921; pile[WZ1]=jvj+15; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(921,jvj+15,jvj+29)*/
for(a=x[jvj+29];a>0;a=t[a]) if(s[a]==x[W]) goto l17;
l14:pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[68])( );     /*PLUE0(jvj+30,jvj+31)*/
l15:x[jvj+28]=t[x[jvj+28]];
goto l11;
l17:pile[v[22]]=jvj+31; pile[WZ1]=jvj+34; pile[WZ3]=jvj+36; 
(*f[45])( );if(v[102]) goto l16;     /*FNDZ0(jvj+31,jvj+34,V48,jvj+36)*/
V48=pile[WZ2]; 
V43=V48;
pile[v[22]]=jvj+18; pile[WZ3]=jvj+35; 
(*f[45])( );if(v[102]) goto l16;     /*FNDZ0(jvj+18,jvj+34,V50,jvj+35)*/
V50=pile[WZ2]; 
V42=V50;
if((V43!=V42)) goto l14;
l16:pile[v[22]]=498; pile[WZ1]=jvj+31; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(498,jvj+31,jvj+33)*/
pile[WZ1]=jvj+18; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(498,jvj+18,jvj+32)*/
if((x[jvj+33]!=x[jvj+32])) goto l14;
goto l15;
}
