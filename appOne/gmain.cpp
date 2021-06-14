#include"libOne.h"
void gmain() {
    window(1000, 1000);
    float rx = 5;
    float bx = 9;
    while (notQuit) {
        //１次元ベクトル
        float vx = rx - bx; //終点ー始点
        float mag = vx < 0 ? -vx : vx; //0より小さかったら-vxではなかったらvx
        float nvx = vx / mag;
        bx += nvx * 0.01f; //常に0.01の速度で移動する(一定速度で動かせる)
        clear(200);
        mathAxis(9.1f);
        //ベクトルを描画
        strokeWeight(10);
        stroke(0);
        mathArrow(0, 0, vx, 0);
        stroke(255, 0, 0);
        mathArrow(0, 0, nvx, 0);

        strokeWeight(20);
        stroke(255, 0, 0);
        mathPoint(rx, 0);
        strokeWeight(20);
        stroke(0, 0, 255);
        mathPoint(bx, 0);

        textSize(50);
        text(vx, 0, 50);
        text(mag, 0, 100);

    }
}
