

#if( VRP_MODULE_LINK_PPP == VRP_YES )

#if( VRP_MODULE_LINK_PPP_PAP == VRP_YES )

#ifndef      _PAPC_TYPE_H_
#define      _PAPC_TYPE_H_

#ifdef      __cplusplus
extern "C" {
#endif		/* end of __cplusplus */

/* PAP 控制块数据结构定义*/
typedef struct tagPppPapInfo
{
    PPPINFO_S *pstPppInfo;/* PPP 控制块指针*/
    VOID* pstAAAAuthReqMsg;
    HTIMER ulServerTimeoutID;         /* Server 超时定时器 ID */
    HTIMER ulClientTimeoutID;	/* Client 超时定时器 ID*/

    VOS_UINT32 ulWaitReqTimeout;/* 等待对端验证超时时间 */
    VOS_UINT32 ulWaitLnsAuthTimeOut;
    VOS_UINT32 ulSendReqTimeout;/* 验证请求超时重传时间 */
    VOS_UINT32 ulMaxTransmits;/* 验证请求最大传送次数 */
    VOS_UINT32 ulWaitAuthRspTimeout;             /* 等待AAA鉴权响应超时时间 */
    VOS_UINT32 ulAuthMaxTransmits;/* 验证请求最大传送次数 */

    VOS_UINT16 usAuthClientFailureTimes;	/* 本端验证失败次数*/
    VOS_UINT16 usAuthServerFailureTimes;	/* 远端验证失败次数*/
    UCHAR ucClientState;/* Client 状态 */
    UCHAR ucServerState;/* Server 状态 */
    UCHAR ucId;	/* 当前本地验证请求包的ID*/
    UCHAR ucAuthTransmits;	/* 传送验证请求的次数 */




    UCHAR ucTransmits;	/* 传送验证请求的次数*/
    UCHAR ucPeerId;/* 当前对端验证请求包ID */
    UCHAR ucUsed;  /*pap控制块使用标记，1使用；0未使用*/
    UCHAR szPapUsrName[PPP_MAXUSERNAMELEN + 2];/*用户名*/
    UCHAR szPapUsrPwd[PPP_MAXUSERPWDLEN + 2];/*用户口令*/
    UCHAR ucPppPapInfoRev;        /*保留字段*/

}PPPPAPINFO_S;


#ifdef      __cplusplus
}
#endif      /* end of __cplusplus */

#endif      /* end of _PAP_TYPE_H_ */

#endif  /* #if( VRP_MODULE_LINK_PPP_PAP == VRP_YES ) */

#endif	/* #if( VRP_MODULE_LINK_PPP == VRP_YES ) */


