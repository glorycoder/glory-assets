#ifndef __KEY_IF_H__
#define __KEY_IF_H__
////////////////////////////////////////////////////////////////////////////////
#include "keyif_cfg.h"

#define KEY_STA_BEGIN   (0)
#define KEY_STA_KEEP    (1)
#define KEY_STA_END     (2)

void kif_Init(void);
void kif_TickHook(void);

/*
    kindex ������������0��ʼ����С��KEY_NUM_MAX��
    ����ֵ�����������·��ط��㣬������̧�𷵻��㡣
*/
extern u8_t HW_KeyRead(u8_t kindex);
/*
    kindex ������������0��ʼ����С��KEY_NUM_MAX��
    ksta   ����״̬��ȡֵΪKEY_STA_ϵ�кꡣ
    ktick  ������ʱ����KEY_PERIOD_MSʱ��Ϊ������λ��
    ����ֵ��������ΰ��������Ѿ������׵����ͷ��ط��㡣
*/
extern u8_t USR_KeyProc(u8_t kindex, u8_t ksta, u8_t ktick);

////////////////////////////////////////////////////////////////////////////////
#endif /* __KEY_IF_H__ */

