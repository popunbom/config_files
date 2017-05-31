//
// Created by cs14013 on 西暦17/05/31.
//

#ifndef UNTITLED_CVHEADER_H
#define UNTITLED_CVHEADER_H

#endif //UNTITLED_CVHEADER_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <cv.h>
#include <climits>


// Enum of "func: Kirsh"
typedef enum {
    DEG_0   = 0,
    DEG_45  = 1,
    DEG_90  = 2,
    DEG_135 = 3,
    DEG_180 = 4,
    DEG_225 = 5,
    DEG_270 = 6,
    DEG_315 = 7,
} KIRSH_DEGREE;

const cv::Mat KIRSH_KERNEL[8] = {
        (cv::Mat_<int>(3,3) <<  5, 5, 5, -3, 0,-3, -3,-3,-3),
        (cv::Mat_<int>(3,3) <<  5, 5,-3,  5, 0,-3, -3,-3,-3),
        (cv::Mat_<int>(3,3) <<  5,-3,-3,  5, 0,-3,  5,-3,-3),
        (cv::Mat_<int>(3,3) << -3,-3,-3,  5, 0,-3,  5, 5,-3),
        (cv::Mat_<int>(3,3) << -3,-3,-3, -3, 0,-3,  5, 5, 5),
        (cv::Mat_<int>(3,3) << -3,-3,-3, -3, 0, 5, -3, 5, 5),
        (cv::Mat_<int>(3,3) << -3,-3, 5, -3, 0, 5, -3,-3, 5),
        (cv::Mat_<int>(3,3) << -3, 5, 5, -3, 0, 5, -3,-3,-3)
        };
/*
const int KIRSH_KERNEL[8][3][3] = {
        { { 5, 5, 5}, {-3, 0,-3}, {-3,-3,-3} },
        { { 5, 5,-3}, { 5, 0,-3}, {-3,-3,-3} },
        { { 5,-3,-3}, { 5, 0,-3}, { 5,-3,-3} },
        { {-3,-3,-3}, { 5, 0,-3}, { 5, 5,-3} },
        { {-3,-3,-3}, {-3, 0,-3}, { 5, 5, 5} },
        { {-3,-3,-3}, {-3, 0, 5}, {-3, 5, 5} },
        { {-3,-3, 5}, {-3, 0, 5}, {-3,-3, 5} },
        { {-3, 5, 5}, {-3, 0, 5}, {-3,-3,-3} }
};
*/


//#define FILE_PATH "Sample.jpg"
//#define FILE_PATH "Lenna.png"
//#define FILE_PATH "C3_5369_2.png"
#define FILE_PATH "IMG_6963-qv.jpg"
#define X_PERC 0.6
#define Y_PERC 0.6