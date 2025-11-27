extern "C" void lib_AesEncrypt(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_pText = CloneTextData(AesEncrypt((char*)GetMDataPtr(&pArgInf[0]), (char*)GetMDataPtr(&pArgInf[1]), (char*)GetMDataPtr(&pArgInf[2]), pArgInf[3].m_int, pArgInf[4].m_int));
}

extern "C" void lib_AesDecrypt(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_pText = CloneTextData(AesDecrypt((char*)GetMDataPtr(&pArgInf[0]), (char*)GetMDataPtr(&pArgInf[1]), (char*)GetMDataPtr(&pArgInf[2]), pArgInf[3].m_int, pArgInf[4].m_int));
}

#ifndef __E_STATIC_LIB

static int g_CategoryCount = 1;
static char  g_Category[] = {
_T("0000AES_library\0")
_T("\0")
};
ARG_INFO g_ArgInfo[] = {
{/*名称     */_T("data")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("key")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("iv")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("mode")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("bits")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("data")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("key")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("iv")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("mode")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("bits")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
}
};

CMD_INFO g_CmdInfo[] = {
{/*名称       */_T("Aes_Encrypt")
,/*英文名     */_T("lib_AesEncrypt")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_TEXT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */5
,/*参数地址   */&g_ArgInfo[0]
},
{/*名称       */_T("Aes_Decrypt")
,/*英文名     */_T("lib_AesDecrypt")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_TEXT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */5
,/*参数地址   */&g_ArgInfo[5]
}
};

PFN_EXECUTE_CMD g_RunFunc[] = {
lib_AesEncrypt,
lib_AesDecrypt
};

static const char* const g_CmdNames[] = {
"lib_AesEncrypt",
"lib_AesDecrypt"
};


#endif

