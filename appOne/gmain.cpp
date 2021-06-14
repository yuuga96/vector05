#include"libOne.h"
void gmain() {
    window(1000, 1000);
    float rx = 5;
    float bx = 9;
    while (notQuit) {
        //�P�����x�N�g��
        float vx = rx - bx; //�I�_�[�n�_
        float mag = vx < 0 ? -vx : vx; //0��菬����������-vx�ł͂Ȃ�������vx
        float nvx = vx / mag;
        bx += nvx * 0.01f; //���0.01�̑��x�ňړ�����(��葬�x�œ�������)
        clear(200);
        mathAxis(9.1f);
        //�x�N�g����`��
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
