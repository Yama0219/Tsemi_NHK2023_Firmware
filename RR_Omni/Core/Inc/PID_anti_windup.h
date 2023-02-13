//
// Created by kenke on 2023/01/20.
//

#ifndef PID_ANTI_WINDUP_H
#define PID_ANTI_WINDUP_H

#ifdef CONTROLLER_INCLUDED
#error "DO NOT INCLUDE TOW OR MORE CONTROLLER HEADER FILES"
#else
#define CONTROLLER_INCLUDED
#endif

#define Kp 0.1f
#define Ki 0.008f
#define Kd 0.005f

#define MAX_OUT 950

float calc_output_PID_AW(float target, float curr_val, float dt);

#endif //PID_ANTI_WINDUP_H
