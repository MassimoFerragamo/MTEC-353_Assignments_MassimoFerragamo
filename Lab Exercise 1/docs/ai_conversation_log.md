# AI conversation documentation

These are the questions I asked AI in the making of my project. I am still using it mostly as a learning/research tool. I thought about asking it to help me solve issues like th character scailing in ascii art, but I like to problem solve these things myself. 

## Sin() Math Library Question:
- **My Prompt:** chat how do I include a math library so I calculate sin in a C program?
- **Why I Asked:** I needed a quick and straight forward reply.
- **AI Response:** in C sin() is supplied by the <math.h>. so #include <math.h>.
- **Effectiveness:** 5.
- **What I Learned:** how to call the math library in c.
- **Follow-up Needed:** no. I just needed a quick reply.

## Array Extension Solutions in C:
- **My Prompt:** how can I keep adding values into an array in c?
- **Why I Asked:** I needed to add the values I calculated for my sine to a lookup table and I remembered C arrays are fixed size. 
- **AI Response:** either know before hand how many values you will be using. Or use realloc() to grow the size of the array. 
- **Effectiveness:** 5.
- **What I Learned:** different ways to change the size of an array. I went for the first solution in this case. this also helps me (maybe) understand why audio buffer sizes work the way they do. 
- **Follow-up Needed:** no. it was exactly what I needed and more.

## inBuilt clamp in C:
- **My Prompt:** is there a clamp operation in C?
- **Why I Asked:** I was working on how do clip my waveform, and I did with if statements, I was wondering if C had it built in?
- **AI Response:** no but you can #define it 
- **Effectiveness:** 5.
- **What I Learned:** I can #define functions.
- **Follow-up Needed:** no. 

## db to Amp Conversion Reminder:
- **My Prompt:** how do I convert db to amp again?
- **Why I Asked:** I did not remember the exact operation for this.
- **AI Response:** powf(10.0f, db / 20.0f);
- **Effectiveness:** 5.
- **What I Learned:** refresher for some math.
- **Follow-up Needed:** no. 