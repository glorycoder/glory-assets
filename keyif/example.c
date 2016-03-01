#include "keyif.h"

// ��ȡ��������״̬�ĺ�����
u8_t HW_KeyRead(u8_t kindex)
{
    switch(kindex){
    case 0:     // ����#0
        if(GPIO_PIN_ISDOWN(0)){
            return 1;
        }
        return 0;

    case 1:     // ����#1
        if(GPIO_PIN_ISDOWN(1)){
            return 1;
        }
        return 0;

    case 2:     // ����#2
        if(GPIO_PIN_ISDOWN(2)){
            return 1;
        }
        return 0;

    case 3:     // ����#3
        if(GPIO_PIN_ISDOWN(3)){
            return 1;
        }
        return 0;
    }
    return 0;
}

// �����¼���������
u8_t USR_KeyProc(u8_t kindex, u8_t ksta, u8_t ktick)
{
    switch(kindex){
    case 0:     // ����#0
        if(ksta == KEY_STA_BEGIN){
            // ���������£�TODO SOMETHING��
            
            return 0;
        }
        else if(ksta == KEY_STA_KEEP){
            // ���������֣�TODO SOMETHING��
            
            return 0;
        }
        else if(ksta == KEY_STA_END){
            // �������ɿ���TODO SOMETHING��
            
            return 0;
        }
        break;

    case 1:     // ����#1
        if(ksta == KEY_STA_KEEP && ktick == 1000/KEY_PERIOD_MS){
            // �������±�����1000���룬TODO SOMETHING��
            
            return 1;
        }
        break;

    case 2:     // ����#2
        if(ksta == KEY_STA_KEEP && ktick == 1){
            // ���������£��߱��˼��KEY_PERIOD_MS�����ȥ����ʱ�䣬TODO SOMETHING��
            
            return 1;
        }
        break;

    case 3:     // ����#3
        if(ksta == KEY_STA_END){
            // ��Ӧ�����ɿ��¼���TODO SOMETHING��
            
        }
        break;
    }
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//|          |
//| �������� |: main
//| �������� |: 
//|          |: 
//| �����б� |: 
//|          |: 
//| ��    �� |: 
//|          |: 
//| ��ע��Ϣ |: 
//|          |: 
////////////////////////////////////////////////////////////////////////////////
int main(void)
{
    // ��ʼ��KEYIF��
    kif_Init();
    
    while(1){
        delay(KEY_PERIOD_MS);
        // ��KEY_PERIOD_MS����Ϊ���ڵ��á�
        kif_TickHook();
    }
}
