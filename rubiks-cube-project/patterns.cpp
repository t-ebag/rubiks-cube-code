/*
Format for patterns:
0 = off
1 = on, solid white
2 = on, rainbow
3 = on, rainbow offset 32
4 = on, rainbow offset 64
5 = on, rainbow offset 96
6 = on, rainbow offset 128
7 = on, rainbow offset 160
8 = on, rainbow offset 192
9 = on, rainbow offset 224
*/

byte amongus[36] = {
  0,2,2,2,0,0,
  2,4,4,4,2,2,
  2,4,4,4,2,2,
  0,2,2,2,2,2,
  0,2,0,0,2,0,
  0,2,0,0,2,0
};

byte smiley[36] = {
    0,0,0,0,0,0,
    0,2,0,0,2,0,
    0,0,0,0,0,0,
    4,0,0,0,0,4,
    4,0,0,0,0,4,
    0,4,4,4,4,0,
}

byte animationTemplate[324] = {
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0
}

byte animationTemplate[324] = {
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  0,0,1,0,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  0,1,2,1,0,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  1,2,2,3,1,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  1,2,3,3,1,0,  0,0,0,0,0,0,
    0,0,0,0,0,0,  2,3,3,3,3,1,  0,0,0,0,0,0,

    1,1,1,1,1,1,  2,3,3,3,3,4,  1,1,1,1,1,0,
    1,2,2,2,2,2,  1,3,3,1,4,4,  4,4,4,4,1,0,
    0,1,2,2,2,2,  1,3,3,1,4,4,  4,4,4,1,0,0,
    0,0,1,2,2,2,  1,3,3,1,4,4,  4,4,1,0,0,0,
    0,0,0,1,2,3,  3,3,3,4,4,4,  4,1,0,0,0,0,
    0,0,0,0,1,3,  3,3,3,4,4,4,  1,0,0,0,0,0,
    
    0,0,0,1,2,3,  3,3,4,4,4,4,  4,1,0,0,0,0,
    0,0,0,1,2,3,  3,1,1,1,4,4,  4,1,0,0,0,0,
    0,0,1,2,3,3,  1,0,0,0,1,1,  4,4,1,0,0,0,
    0,0,1,2,3,1,  0,0,0,0,0,0,  4,4,1,0,0,0,
    0,0,1,1,1,0,  0,0,0,0,0,0,  1,1,1,0,0,0,
    0,0,0,0,0,0,  0,0,0,0,0,0,  0,0,0,0,0,0
}