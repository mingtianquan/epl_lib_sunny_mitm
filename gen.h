extern "C" void lib_PInit(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = PInit(pArgInf[0].m_int, pArgInf[1].m_int, pArgInf[2].m_bool, pArgInf[3].m_bool);
}

extern "C" void lib_SetIeProxy(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
SetIeProxy(pArgInf[0].m_bool);
}

extern "C" void lib_GetResponseStatusCode(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = GetResponseStatusCode(pArgInf[0].m_int);
}

extern "C" void lib_SetRequestProxy(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
SetRequestProxy(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), (char*)GetMDataPtr(&pArgInf[2]), pArgInf[3].m_int);
}

extern "C" void lib_SetCa(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
SetCa(pArgInf[0].m_int);
}

extern "C" void lib_Geterr(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_pText = CloneTextData(Geterr());
}

extern "C" void lib_Stop(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
Stop();
}

extern "C" void lib_GetResponseHeader(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_pText = CloneTextData(GetResponseHeader(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1])));
}

extern "C" void lib_SetRequestUrl(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
SetRequestUrl(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]));
}

extern "C" void lib_DelResponseHeader(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
DelResponseHeader(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]));
}

extern "C" void lib_DelRequestHeader(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
DelRequestHeader(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]));
}

extern "C" void lib_SetRequestHeader(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
SetRequestHeader(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), (char*)GetMDataPtr(&pArgInf[2]));
}

extern "C" void lib_SetRequestCookie(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
SetRequestCookie(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), (char*)GetMDataPtr(&pArgInf[2]));
}

extern "C" void lib_SetResponseHeader(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
SetResponseHeader(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), (char*)GetMDataPtr(&pArgInf[2]));
}

extern "C" void lib_SetResponseAllHeader(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
SetResponseAllHeader(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]));
}

extern "C" void lib_SetResponseStatus(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
SetResponseStatus(pArgInf[0].m_int, pArgInf[1].m_int);
}

extern "C" void lib_SetRequestAllCookie(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
SetRequestAllCookie(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]));
}

extern "C" void lib_GetRequestHeader(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_pText = CloneTextData(GetRequestHeader(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1])));
}

extern "C" void lib_GetRequestCookie(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_pText = CloneTextData(GetRequestCookie(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1])));
}

extern "C" void lib_GetRequestData(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_pText = CloneTextData(GetRequestData(pArgInf[0].m_int));
}

extern "C" void lib_GetResponseData(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_pText = CloneTextData(GetResponseData(pArgInf[0].m_int));
}

extern "C" void lib_SetRequestData(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = SetRequestData(pArgInf[0].m_int, (GoUintptr)GetMDataPtr(&pArgInf[1]), pArgInf[2].m_int);
}

extern "C" void lib_SetResponseData(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = SetResponseData(pArgInf[0].m_int, (GoUintptr)GetMDataPtr(&pArgInf[1]), pArgInf[2].m_int);
}

extern "C" void lib_GetResponseBody(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = GetResponseBody(pArgInf[0].m_int);
}

extern "C" void lib_GetRequestBody(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = GetRequestBody(pArgInf[0].m_int);
}

extern "C" void lib_GetRequestBodyLen(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = GetRequestBodyLen(pArgInf[0].m_int);
}

extern "C" void lib_GetResponseBodyLen(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = GetResponseBodyLen(pArgInf[0].m_int);
}

extern "C" void lib_GetRequestAllHeader(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_pText = CloneTextData(GetRequestAllHeader(pArgInf[0].m_int));
}

extern "C" void lib_GetRequestALLCookie(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_pText = CloneTextData(GetRequestALLCookie(pArgInf[0].m_int));
}

extern "C" void lib_GetResponseAllHeader(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_pText = CloneTextData(GetResponseAllHeader(pArgInf[0].m_int));
}

extern "C" void lib_GetWebsocketBodyLen(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = GetWebsocketBodyLen(pArgInf[0].m_int);
}

extern "C" void lib_GetWebsocketBody(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = GetWebsocketBody(pArgInf[0].m_int);
}

extern "C" void lib_SetWebsocketBody(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = SetWebsocketBody(pArgInf[0].m_int, (GoUintptr)GetMDataPtr(&pArgInf[1]), pArgInf[2].m_int);
}

extern "C" void lib_SendWebsocketBody(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = SendWebsocketBody(pArgInf[0].m_int, pArgInf[1].m_int, (GoUintptr)GetMDataPtr(&pArgInf[2]), pArgInf[3].m_int);
}

extern "C" void lib_NoticeTheRequest(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
NoticeTheRequest(pArgInf[0].m_bool);
}

extern "C" void lib_OpenTcp(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
OpenTcp(pArgInf[0].m_int);
}

extern "C" void lib_SetIpProxy(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
SetIpProxy((char*)GetMDataPtr(&pArgInf[0]));
}

extern "C" void lib_GetResponseStatus(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_pText = CloneTextData(GetResponseStatus(pArgInf[0].m_int));
}

extern "C" void lib_SetIpAuth(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
SetIpAuth((char*)GetMDataPtr(&pArgInf[0]));
}

extern "C" void lib_SetProxyTimeout(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
SetProxyTimeout(pArgInf[0].m_int);
}

extern "C" void lib_SetTcpBody(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = SetTcpBody(pArgInf[0].m_int, pArgInf[1].m_int, (GoUintptr)GetMDataPtr(&pArgInf[2]), pArgInf[3].m_int);
}

extern "C" void lib_HexDump(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_pText = CloneTextData(HexDump((GoUintptr)GetMDataPtr(&pArgInf[0]), pArgInf[1].m_int));
}

extern "C" void lib_StartProcess(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = StartProcess();
}

extern "C" void lib_ProcessAddPID(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = ProcessAddPID(pArgInf[0].m_int);
}

extern "C" void lib_ProcessDelPID(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = ProcessDelPID(pArgInf[0].m_int);
}

extern "C" void lib_ProcessCancelAll(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = ProcessCancelAll();
}

extern "C" void lib_ProcessStart(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = ProcessStart();
}

extern "C" void lib_SetTcpConnectionIP(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = SetTcpConnectionIP(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]));
}

extern "C" void lib_TcpSendMsg(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = TcpSendMsg(pArgInf[0].m_int, (GoUintptr)GetMDataPtr(&pArgInf[1]), pArgInf[2].m_int);
}

extern "C" void lib_BrUnCompress(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = BrUnCompress((GoUintptr)GetMDataPtr(&pArgInf[0]), pArgInf[1].m_int);
}

extern "C" void lib_GzipUnCompress(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = GzipUnCompress((GoUintptr)GetMDataPtr(&pArgInf[0]), pArgInf[1].m_int);
}

extern "C" void lib_DeflateUnCompress(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = DeflateUnCompress((GoUintptr)GetMDataPtr(&pArgInf[0]), pArgInf[1].m_int);
}

extern "C" void lib_BytesToInt(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = BytesToInt((GoUintptr)GetMDataPtr(&pArgInf[0]), pArgInf[1].m_int);
}

extern "C" void lib_TcpSendMsgClient(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = TcpSendMsgClient(pArgInf[0].m_int, (GoUintptr)GetMDataPtr(&pArgInf[1]), pArgInf[2].m_int);
}

extern "C" void lib_Cfree(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
Cfree(pArgInf[0].m_int);
}

extern "C" void lib_CreateKeys(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = CreateKeys();
}

extern "C" void lib_RemoveKeys(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
RemoveKeys(pArgInf[0].m_int);
}

extern "C" void lib_KeysWriteLong(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
KeysWriteLong(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), pArgInf[2].m_int64);
}

extern "C" void lib_KeysWrite(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
KeysWrite(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), (GoUintptr)GetMDataPtr(&pArgInf[2]), pArgInf[3].m_int);
}

extern "C" void lib_KeysWriteStr(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
KeysWriteStr(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), (GoUintptr)GetMDataPtr(&pArgInf[2]), pArgInf[3].m_int);
}

extern "C" void lib_KeysWriteFloat(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
KeysWriteFloat(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), pArgInf[2].m_double);
}

extern "C" void lib_KeysWriteInt(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
KeysWriteInt(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), pArgInf[2].m_int);
}

extern "C" void lib_KeysReadInt(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = KeysReadInt(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]));
}

extern "C" void lib_KeysReadLong(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int64 = KeysReadLong(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]));
}

extern "C" void lib_KeysReadFloat(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_double = KeysReadFloat(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]));
}

extern "C" void lib_KeysRead(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = KeysRead(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), (int*)GetMDataPtr(&pArgInf[2]));
}

extern "C" void lib_KeysEmpty(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
KeysEmpty(pArgInf[0].m_int, pArgInf[1].m_int, pArgInf[2].m_int);
}

extern "C" void lib_KeysDelete(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
KeysDelete(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]));
}

extern "C" void lib_KeysGetJson(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = KeysGetJson(pArgInf[0].m_int);
}

extern "C" void lib_Cfree_1(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
Cfree(pArgInf[0].m_int);
}

extern "C" void lib_AddP12Certificate(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = AddP12Certificate((char*)GetMDataPtr(&pArgInf[0]), (char*)GetMDataPtr(&pArgInf[1]), (char*)GetMDataPtr(&pArgInf[2]), pArgInf[3].m_int);
}

extern "C" void lib_WebpToPngBytes(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = WebpToPngBytes((GoUintptr)GetMDataPtr(&pArgInf[0]), pArgInf[1].m_int);
}

extern "C" void lib_DelP12Certificate(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
DelP12Certificate((char*)GetMDataPtr(&pArgInf[0]));
}

extern "C" void lib_WebpToJpegBytes(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = WebpToJpegBytes((GoUintptr)GetMDataPtr(&pArgInf[0]), pArgInf[1].m_int, pArgInf[2].m_int);
}

extern "C" void lib_WebpToPng(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = WebpToPng((char*)GetMDataPtr(&pArgInf[0]), (char*)GetMDataPtr(&pArgInf[1]));
}

extern "C" void lib_WebpToJpeg(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = WebpToJpeg((char*)GetMDataPtr(&pArgInf[0]), (char*)GetMDataPtr(&pArgInf[1]), pArgInf[2].m_int);
}

extern "C" void lib_CreateCertificate(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = CreateCertificate();
}

extern "C" void lib_RemoveCertificate(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
RemoveCertificate(pArgInf[0].m_int);
}

extern "C" void lib_LoadP12Certificate(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = LoadP12Certificate(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), (char*)GetMDataPtr(&pArgInf[2]));
}

extern "C" void lib_LoadX509KeyPair(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = LoadX509KeyPair(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), (char*)GetMDataPtr(&pArgInf[2]));
}

extern "C" void lib_LoadX509Certificate(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = LoadX509Certificate(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), (char*)GetMDataPtr(&pArgInf[2]), (char*)GetMDataPtr(&pArgInf[3]));
}

extern "C" void lib_SetInsecureSkipVerify(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = SetInsecureSkipVerify(pArgInf[0].m_int, pArgInf[1].m_bool);
}

extern "C" void lib_SetServerName(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = SetServerName(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]));
}

extern "C" void lib_GetServerName(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = GetServerName(pArgInf[0].m_int);
}

extern "C" void lib_AddCertPoolPath(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = AddCertPoolPath(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]));
}

extern "C" void lib_AddCertPoolText(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = AddCertPoolText(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]));
}

extern "C" void lib_AddClientAuth(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = AddClientAuth(pArgInf[0].m_int, pArgInf[1].m_int);
}

extern "C" void lib_CreateCA(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = CreateCA(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), (char*)GetMDataPtr(&pArgInf[2]), (char*)GetMDataPtr(&pArgInf[3]), (char*)GetMDataPtr(&pArgInf[4]), (char*)GetMDataPtr(&pArgInf[5]), (char*)GetMDataPtr(&pArgInf[6]), pArgInf[7].m_int, pArgInf[8].m_int);
}

extern "C" void lib_ExportPub(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = ExportPub(pArgInf[0].m_int);
}

extern "C" void lib_ExportKEY(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = ExportKEY(pArgInf[0].m_int);
}

extern "C" void lib_ExportP12(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = ExportP12(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), (char*)GetMDataPtr(&pArgInf[2]));
}

extern "C" void lib_ExportCA(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = ExportCA(pArgInf[0].m_int);
}

extern "C" void lib_HTTPGetCode(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = HTTPGetCode(pArgInf[0].m_int);
}

extern "C" void lib_HTTPGetBody(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = HTTPGetBody(pArgInf[0].m_int);
}

extern "C" void lib_HTTPGetHeads(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = HTTPGetHeads(pArgInf[0].m_int);
}

extern "C" void lib_HTTPGetBodyLen(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = HTTPGetBodyLen(pArgInf[0].m_int);
}

extern "C" void lib_HTTPSendBin(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
HTTPSendBin(pArgInf[0].m_int, (GoUintptr)GetMDataPtr(&pArgInf[1]), pArgInf[2].m_int);
}

extern "C" void lib_HTTPSetTimeouts(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
HTTPSetTimeouts(pArgInf[0].m_int, pArgInf[1].m_int, pArgInf[2].m_int, pArgInf[3].m_int);
}

extern "C" void lib_HTTPSetProxyBasicAuth(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
HTTPSetProxyBasicAuth(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), (char*)GetMDataPtr(&pArgInf[2]));
}

extern "C" void lib_HTTPSetProxyIP(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
HTTPSetProxyIP(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]));
}

extern "C" void lib_HTTPSetHeader(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
HTTPSetHeader(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), (char*)GetMDataPtr(&pArgInf[2]));
}

extern "C" void lib_HTTPOpen(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
HTTPOpen(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), (char*)GetMDataPtr(&pArgInf[2]));
}

extern "C" void lib_HTTPClientGetErr(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_pText = CloneTextData(HTTPClientGetErr(pArgInf[0].m_int));
}

extern "C" void lib_RemoveHTTPClient(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
RemoveHTTPClient(pArgInf[0].m_int);
}

extern "C" void lib_CreateHTTPClient(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = CreateHTTPClient();
}

extern "C" void lib_CreateSocketClient(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = CreateSocketClient();
}

extern "C" void lib_RemoveSocketClient(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
RemoveSocketClient(pArgInf[0].m_int);
}

extern "C" void lib_SocketClientDial(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = SocketClientDial(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), pArgInf[2].m_int, pArgInf[3].m_bool, pArgInf[4].m_bool, (char*)GetMDataPtr(&pArgInf[5]), (char*)GetMDataPtr(&pArgInf[6]), (char*)GetMDataPtr(&pArgInf[7]), pArgInf[8].m_int);
}

extern "C" void lib_SocketClientClose(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
SocketClientClose(pArgInf[0].m_int);
}

extern "C" void lib_SocketClientGetErr(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_pText = CloneTextData(SocketClientGetErr(pArgInf[0].m_int));
}

extern "C" void lib_SocketClientWrite(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = SocketClientWrite(pArgInf[0].m_int, pArgInf[1].m_int, (GoUintptr)GetMDataPtr(&pArgInf[2]), pArgInf[3].m_int);
}

extern "C" void lib_SocketClientReceive(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = SocketClientReceive(pArgInf[0].m_int, pArgInf[1].m_int, (int*)GetMDataPtr(&pArgInf[2]));
}

extern "C" void lib_SocketClientSetBufferSize(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = SocketClientSetBufferSize(pArgInf[0].m_int, pArgInf[1].m_int);
}

extern "C" void lib_MustTcp(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
MustTcp(pArgInf[0].m_bool);
}

extern "C" void lib_CreateWebsocket(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = CreateWebsocket();
}

extern "C" void lib_RemoveWebsocket(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
RemoveWebsocket(pArgInf[0].m_int);
}

extern "C" void lib_WebsocketDial(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = WebsocketDial(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), (char*)GetMDataPtr(&pArgInf[2]), pArgInf[3].m_int, pArgInf[4].m_bool, (char*)GetMDataPtr(&pArgInf[5]), (char*)GetMDataPtr(&pArgInf[6]), (char*)GetMDataPtr(&pArgInf[7]), (char*)GetMDataPtr(&pArgInf[8]), pArgInf[9].m_int);
}

extern "C" void lib_WebsocketClose(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
WebsocketClose(pArgInf[0].m_int);
}

extern "C" void lib_WebsocketGetErr(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_pText = CloneTextData(WebsocketGetErr(pArgInf[0].m_int));
}

extern "C" void lib_WebsocketReadWrite(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = WebsocketReadWrite(pArgInf[0].m_int, (GoUintptr)GetMDataPtr(&pArgInf[1]), pArgInf[2].m_int, pArgInf[3].m_int);
}

extern "C" void lib_WebsocketClientReceive(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = WebsocketClientReceive(pArgInf[0].m_int, pArgInf[1].m_int, (int*)GetMDataPtr(&pArgInf[2]), (int*)GetMDataPtr(&pArgInf[3]));
}

extern "C" void lib_ScriptCall(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = ScriptCall(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]));
}

extern "C" void lib_SetScript(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
SetScript((char*)GetMDataPtr(&pArgInf[0]));
}

extern "C" void lib_GetRequestClientIp(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_int = GetRequestClientIp(pArgInf[0].m_int);
}

extern "C" void lib_SetTcpAgent(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = SetTcpAgent(pArgInf[0].m_int, (char*)GetMDataPtr(&pArgInf[1]), (char*)GetMDataPtr(&pArgInf[2]), (char*)GetMDataPtr(&pArgInf[3]));
}

extern "C" void lib_TcpCloseClient(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
pRetData->m_bool = TcpCloseClient(pArgInf[0].m_int);
}

extern "C" void lib_SetScriptLogCallAddress(PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
SetScriptLogCallAddress(pArgInf[0].m_int);
}

#ifndef __E_STATIC_LIB

static int g_CategoryCount = 1;
static char  g_Category[] = {
_T("0000sunny_mitm\0")
_T("\0")
};
ARG_INFO g_ArgInfo[] = {
{/*名称     */_T("port")
,/*说明     */_T("绑定端口")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("callback")
,/*说明     */_T("回调子程序地址")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("是否自动安装证书")
,/*说明     */_T("如果本命令返回1 可通过 Sunny_GetErr 查询确认证书是否已安装")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BOOL
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("是否自动设置IE代理")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BOOL
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("是否取消IE代理")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BOOL
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("ip")
,/*说明     */_T("127.0.0.1:8888")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("auth")
,/*说明     */_T("账号:密码")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("timeout")
,/*说明     */_T("超时时间")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("证书管理器")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("名称")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Url")
,/*说明     */_T("Url")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("协议头值")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("协议头值")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("协议头名称")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("val")
,/*说明     */_T("协议头值")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("Cookie名称")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("val")
,/*说明     */_T("Cookie值")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("Head名称")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("val")
,/*说明     */_T("Head值")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("value")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("code")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("val")
,/*说明     */_T("Cookie值")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("协议头名称")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("Cookie名称")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("val")
,/*说明     */_T("设置值")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("len")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("val")
,/*说明     */_T("设置值")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("len")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */_T("会话ID")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("值")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("长度")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("消息类型")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("值")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("长度")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("val")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BOOL
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("callback")
,/*说明     */_T("TCP拦截的回调地址")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("ip")
,/*说明     */_T("代理IP")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("auth")
,/*说明     */_T("代理IP 账号:密码")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("timeout")
,/*说明     */_T("超时 秒")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("消息唯一id")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("消息类型")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("消息值")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("len")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("值")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("长度")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("PID")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("PID")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("新IP")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("唯一id")
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
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("datalen")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("bin")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("len")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("bin")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("len")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("bin")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("len")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("bin")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("len")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("唯一id")
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
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("datalen")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("指针")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("KeysHandle")
,/*说明     */_T("通过 CreateKeys() 获得")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("KeysHandle")
,/*说明     */_T("通过 CreateKeys() 获得")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("要写入的名称")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("val")
,/*说明     */_T("要写入的值")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT64
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("KeysHandle")
,/*说明     */_T("通过 CreateKeys() 获得")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("要写入的名称")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("val")
,/*说明     */_T("要写入的值")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("len")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("KeysHandle")
,/*说明     */_T("通过 CreateKeys() 获得")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("要写入的名称")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("val")
,/*说明     */_T("要写入的值")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("len")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("KeysHandle")
,/*说明     */_T("通过 CreateKeys() 获得")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("要写入的名称")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("val")
,/*说明     */_T("要写入的值")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_DOUBLE
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("KeysHandle")
,/*说明     */_T("通过 CreateKeys() 获得")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("要写入的名称")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("val")
,/*说明     */_T("要写入的值")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("KeysHandle")
,/*说明     */_T("通过 CreateKeys() 获得")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("要读取的名称")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("KeysHandle")
,/*说明     */_T("通过 CreateKeys() 获得")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("要读取的名称")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("KeysHandle")
,/*说明     */_T("通过 CreateKeys() 获得")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("要读取的名称")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("KeysHandle")
,/*说明     */_T("通过 CreateKeys() 获得")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("要读取的名称")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("p")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("KeysHandle")
,/*说明     */_T("通过 CreateKeys() 获得")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("p")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("KeysHandle")
,/*说明     */_T("通过 CreateKeys() 获得")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */_T("要删除的名称")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("指针")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("域名")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("p12证书路径")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("证书密码")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("使用规则")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("webp")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("len")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("域名")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("webp")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("len")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("质量")
,/*说明     */_T("1-100 默认75")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("文件路径")
,/*说明     */_T("c:\123.webp")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("保存路径")
,/*说明     */_T("c:\123.png")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("文件路径")
,/*说明     */_T("c:\123.webp")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("保存路径")
,/*说明     */_T("c:\123.png")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("质量")
,/*说明     */_T("1-100 默认75")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("P12证书路径")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("P12证书密码")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("cert文件路径")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("key文件路径")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("host")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("cert文件内容")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("key文件内容")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("b")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BOOL
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("n")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("crt")
,/*说明     */_T("信任的证书文件名")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("crtText")
,/*说明     */_T("信任的证书文件内容")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("val")
,/*说明     */_T("0-4 使用 #SSL_ClientAuth_")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("证书所属的国家")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("证书存放的公司名称")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("证书所属的部门名称")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("证书签发机构所在省")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("证书域名")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("证书签发机构所在市")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("密钥长度")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("到期时间")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("CertificateContext")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("CertificateContext")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("CertificateContext")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("路径")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("密码")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("CertificateContext")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("值")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("长度")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("连接超时")
,/*说明     */_T("超时时间，毫秒")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("发送超时")
,/*说明     */_T("超时时间，毫秒")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("接收超时")
,/*说明     */_T("超时时间，毫秒")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("user")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("pass")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("ip")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("name")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("value")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("methods")
,/*说明     */_T("post get")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Url")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("地址")
,/*说明     */_T("127.0.0.1:8888")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("回调地址")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("istls")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BOOL
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("是否同步模式")
,/*说明     */_T("设置为真 回调地址 将 无效")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BOOL
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("ProxyIP")
,/*说明     */_T("S5代理 格式127.0.0.1:8888")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("ProxyUser")
,/*说明     */_T("S5代理账号 可以为空")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("ProxyPass")
,/*说明     */_T("S5代理密码 可以为空")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Sunny证书管理器Context")
,/*说明     */_T("Sunny证书管理器Context")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("超时时间")
,/*说明     */_T("写入超时时间,单位，毫秒 默认30000 /30秒")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("bin")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("len")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("超时时间")
,/*说明     */_T("毫秒。默认100")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("len")
,/*说明     */_T("返回数据长度")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("缓冲区大小")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MustTcp")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BOOL
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("url")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Headers")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("回调地址")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("同步模式")
,/*说明     */_T("如果为真 回调地址将无效")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BOOL
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("代理类型")
,/*说明     */_T("s5/http 默认s5")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("代理地址")
,/*说明     */_T("例如127.0.0.1:8888")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("代理账号")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("代理密码")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Sunny证书管理器Context")
,/*说明     */_T("Sunny证书管理器Context")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("bin")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_BIN
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("len")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Frame")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("Context")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("超时时间")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("messageType")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("len")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("type")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("args")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("代码")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("MessageId")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("ip")
,/*说明     */_T("127.0.0.1:8888 只能是S5类型代理")
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("user")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("pass")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_TEXT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("唯一ID")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
},
{/*名称     */_T("i")
,/*说明     */NULL
,/*图像索引 */0
,/*图像数目 */0
,/*类型     */SDT_INT
,/*初始值   */0
,/*状态     */NULL
}
};

CMD_INFO g_CmdInfo[] = {
{/*名称       */_T("Sunny_Start")
,/*英文名     */_T("lib_PInit")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */4
,/*参数地址   */&g_ArgInfo[0]
},
{/*名称       */_T("Sunny_Cancel_IE_Proxy")
,/*英文名     */_T("lib_SetIeProxy")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[4]
},
{/*名称       */_T("Sunny_GetResponseStatusCode")
,/*英文名     */_T("lib_GetResponseStatusCode")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[5]
},
{/*名称       */_T("Sunny_SetRequestProxy")
,/*英文名     */_T("lib_SetRequestProxy")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */4
,/*参数地址   */&g_ArgInfo[6]
},
{/*名称       */_T("Sunny_SetCa")
,/*英文名     */_T("lib_SetCa")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[10]
},
{/*名称       */_T("Sunny_GetErr")
,/*英文名     */_T("lib_Geterr")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_TEXT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */0
,/*参数地址   */NULL
},
{/*名称       */_T("Sunny_Stop")
,/*英文名     */_T("lib_Stop")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */0
,/*参数地址   */NULL
},
{/*名称       */_T("Sunny_GetResponseHeader")
,/*英文名     */_T("lib_GetResponseHeader")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_TEXT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[11]
},
{/*名称       */_T("Sunny_SetRequestUrl")
,/*英文名     */_T("lib_SetRequestUrl")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[13]
},
{/*名称       */_T("Sunny_DelResponseHeader")
,/*英文名     */_T("lib_DelResponseHeader")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[15]
},
{/*名称       */_T("Sunny_DelRequestHeader")
,/*英文名     */_T("lib_DelRequestHeader")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[17]
},
{/*名称       */_T("Sunny_SetRequestHeader")
,/*英文名     */_T("lib_SetRequestHeader")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[19]
},
{/*名称       */_T("Sunny_SetRequestCookie")
,/*英文名     */_T("lib_SetRequestCookie")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[22]
},
{/*名称       */_T("Sunny_SetResponseHeader")
,/*英文名     */_T("lib_SetResponseHeader")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[25]
},
{/*名称       */_T("Sunny_SetResponseAllHeader")
,/*英文名     */_T("lib_SetResponseAllHeader")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[28]
},
{/*名称       */_T("Sunny_SetResponseStatus")
,/*英文名     */_T("lib_SetResponseStatus")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[30]
},
{/*名称       */_T("Sunny_SetRequestAllCookie")
,/*英文名     */_T("lib_SetRequestAllCookie")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[32]
},
{/*名称       */_T("Sunny_GetRequestHeader")
,/*英文名     */_T("lib_GetRequestHeader")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_TEXT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[34]
},
{/*名称       */_T("Sunny_GetRequestCookie")
,/*英文名     */_T("lib_GetRequestCookie")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_TEXT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[36]
},
{/*名称       */_T("Sunny_GetRequestData")
,/*英文名     */_T("lib_GetRequestData")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_TEXT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[38]
},
{/*名称       */_T("Sunny_GetResponseData")
,/*英文名     */_T("lib_GetResponseData")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_TEXT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[39]
},
{/*名称       */_T("Sunny_SetRequestData")
,/*英文名     */_T("lib_SetRequestData")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[40]
},
{/*名称       */_T("Sunny_SetResponseData")
,/*英文名     */_T("lib_SetResponseData")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[43]
},
{/*名称       */_T("Sunny_GetResponseBody")
,/*英文名     */_T("lib_GetResponseBody")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[46]
},
{/*名称       */_T("Sunny_GetRequestBody")
,/*英文名     */_T("lib_GetRequestBody")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[47]
},
{/*名称       */_T("Sunny_GetRequestBodyLen")
,/*英文名     */_T("lib_GetRequestBodyLen")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[48]
},
{/*名称       */_T("Sunny_GetResponseBodyLen")
,/*英文名     */_T("lib_GetResponseBodyLen")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[49]
},
{/*名称       */_T("Sunny_GetRequestAllHeader")
,/*英文名     */_T("lib_GetRequestAllHeader")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_TEXT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[50]
},
{/*名称       */_T("Sunny_GetRequestALLCookie")
,/*英文名     */_T("lib_GetRequestALLCookie")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_TEXT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[51]
},
{/*名称       */_T("Sunny_GetResponseAllHeader")
,/*英文名     */_T("lib_GetResponseAllHeader")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_TEXT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[52]
},
{/*名称       */_T("Sunny_GetWebsocketBodyLen")
,/*英文名     */_T("lib_GetWebsocketBodyLen")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[53]
},
{/*名称       */_T("Sunny_GetWebsocketBody")
,/*英文名     */_T("lib_GetWebsocketBody")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[54]
},
{/*名称       */_T("Sunny_SetWebsocketBody")
,/*英文名     */_T("lib_SetWebsocketBody")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[55]
},
{/*名称       */_T("Sunny_SendWebsocketBody")
,/*英文名     */_T("lib_SendWebsocketBody")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */4
,/*参数地址   */&g_ArgInfo[58]
},
{/*名称       */_T("Sunny_开启过滤选项")
,/*英文名     */_T("lib_NoticeTheRequest")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[62]
},
{/*名称       */_T("Sunny_开启TCP拦截")
,/*英文名     */_T("lib_OpenTcp")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[63]
},
{/*名称       */_T("Sunny_SetIpProxy")
,/*英文名     */_T("lib_SetIpProxy")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[64]
},
{/*名称       */_T("Sunny_GetResponseStatus")
,/*英文名     */_T("lib_GetResponseStatus")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_TEXT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[65]
},
{/*名称       */_T("Sunny_SetIpAuth")
,/*英文名     */_T("lib_SetIpAuth")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[66]
},
{/*名称       */_T("Sunny_SetProxyTimeout")
,/*英文名     */_T("lib_SetProxyTimeout")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[67]
},
{/*名称       */_T("Sunny_设置Tcp消息")
,/*英文名     */_T("lib_SetTcpBody")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */4
,/*参数地址   */&g_ArgInfo[68]
},
{/*名称       */_T("HexDump")
,/*英文名     */_T("lib_HexDump")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_TEXT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[72]
},
{/*名称       */_T("Sunny_StartProcess")
,/*英文名     */_T("lib_StartProcess")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */0
,/*参数地址   */NULL
},
{/*名称       */_T("Sunny_ProcessAddPID")
,/*英文名     */_T("lib_ProcessAddPID")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[74]
},
{/*名称       */_T("Sunny_ProcessDelPID")
,/*英文名     */_T("lib_ProcessDelPID")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[75]
},
{/*名称       */_T("Sunny_ProcessCancelAll")
,/*英文名     */_T("lib_ProcessCancelAll")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */0
,/*参数地址   */NULL
},
{/*名称       */_T("Sunny_ProcessStart")
,/*英文名     */_T("lib_ProcessStart")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */0
,/*参数地址   */NULL
},
{/*名称       */_T("Sunny_设置Tcp连接IP")
,/*英文名     */_T("lib_SetTcpConnectionIP")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[76]
},
{/*名称       */_T("Sunny_Tcp主动发送消息到服务器")
,/*英文名     */_T("lib_TcpSendMsg")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[78]
},
{/*名称       */_T("sunny_BrUnCompress")
,/*英文名     */_T("lib_BrUnCompress")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[81]
},
{/*名称       */_T("sunny_GzipUnCompress")
,/*英文名     */_T("lib_GzipUnCompress")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[83]
},
{/*名称       */_T("sunny_DeflateUnCompress")
,/*英文名     */_T("lib_DeflateUnCompress")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[85]
},
{/*名称       */_T("sunny_BytesToInt")
,/*英文名     */_T("lib_BytesToInt")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[87]
},
{/*名称       */_T("Sunny_Tcp主动发送消息到客户端")
,/*英文名     */_T("lib_TcpSendMsgClient")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[89]
},
{/*名称       */_T("sunny_free_Go_Pointer")
,/*英文名     */_T("lib_Cfree")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[92]
},
{/*名称       */_T("Sunny_CreateKeys")
,/*英文名     */_T("lib_CreateKeys")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */0
,/*参数地址   */NULL
},
{/*名称       */_T("Sunny_RemoveKeys")
,/*英文名     */_T("lib_RemoveKeys")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[93]
},
{/*名称       */_T("Sunny_KeysWriteLong")
,/*英文名     */_T("lib_KeysWriteLong")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[94]
},
{/*名称       */_T("Sunny_KeysWrite")
,/*英文名     */_T("lib_KeysWrite")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */4
,/*参数地址   */&g_ArgInfo[97]
},
{/*名称       */_T("Sunny_KeysWriteStr")
,/*英文名     */_T("lib_KeysWriteStr")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */4
,/*参数地址   */&g_ArgInfo[101]
},
{/*名称       */_T("Sunny_KeysWriteFloat")
,/*英文名     */_T("lib_KeysWriteFloat")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[105]
},
{/*名称       */_T("Sunny_KeysWriteInt")
,/*英文名     */_T("lib_KeysWriteInt")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[108]
},
{/*名称       */_T("Sunny_KeysReadInt")
,/*英文名     */_T("lib_KeysReadInt")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[111]
},
{/*名称       */_T("Sunny_KeysReadLong")
,/*英文名     */_T("lib_KeysReadLong")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT64
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[113]
},
{/*名称       */_T("Sunny_KeysReadFloat")
,/*英文名     */_T("lib_KeysReadFloat")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_DOUBLE
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[115]
},
{/*名称       */_T("Sunny_KeysRead")
,/*英文名     */_T("lib_KeysRead")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[117]
},
{/*名称       */_T("Sunny_KeysEmpty")
,/*英文名     */_T("lib_KeysEmpty")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[120]
},
{/*名称       */_T("Sunny_KeysDelete")
,/*英文名     */_T("lib_KeysDelete")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[123]
},
{/*名称       */_T("Sunny_KeysGetJson")
,/*英文名     */_T("lib_KeysGetJson")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[125]
},
{/*名称       */_T("Sunny_Ptr_Cfree")
,/*英文名     */_T("lib_Cfree_1")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[126]
},
{/*名称       */_T("Sunny_AddP12Certificate")
,/*英文名     */_T("lib_AddP12Certificate")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */4
,/*参数地址   */&g_ArgInfo[127]
},
{/*名称       */_T("Sunny_WebpToPngBytes")
,/*英文名     */_T("lib_WebpToPngBytes")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[131]
},
{/*名称       */_T("Sunny_DelP12Certificate")
,/*英文名     */_T("lib_DelP12Certificate")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[133]
},
{/*名称       */_T("Sunny_WebpToJpegBytes")
,/*英文名     */_T("lib_WebpToJpegBytes")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[134]
},
{/*名称       */_T("Sunny_WebpToPng")
,/*英文名     */_T("lib_WebpToPng")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[137]
},
{/*名称       */_T("Sunny_WebpToJpeg")
,/*英文名     */_T("lib_WebpToJpeg")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[139]
},
{/*名称       */_T("Sunny_CreateCertificateManager")
,/*英文名     */_T("lib_CreateCertificate")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */0
,/*参数地址   */NULL
},
{/*名称       */_T("Sunny_RemoveCertificateManager")
,/*英文名     */_T("lib_RemoveCertificate")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[142]
},
{/*名称       */_T("Sunny_LoadP12Certificate")
,/*英文名     */_T("lib_LoadP12Certificate")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[143]
},
{/*名称       */_T("Sunny_LoadX509KeyPair")
,/*英文名     */_T("lib_LoadX509KeyPair")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[146]
},
{/*名称       */_T("Sunny_LoadX509Certificate")
,/*英文名     */_T("lib_LoadX509Certificate")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */4
,/*参数地址   */&g_ArgInfo[149]
},
{/*名称       */_T("Sunny_SetInsecureSkipVerify")
,/*英文名     */_T("lib_SetInsecureSkipVerify")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[153]
},
{/*名称       */_T("Sunny_SetServerName")
,/*英文名     */_T("lib_SetServerName")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[155]
},
{/*名称       */_T("Sunny_GetServerName")
,/*英文名     */_T("lib_GetServerName")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[157]
},
{/*名称       */_T("Sunny_AddCertPoolPath")
,/*英文名     */_T("lib_AddCertPoolPath")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[158]
},
{/*名称       */_T("Sunny_AddCertPoolText")
,/*英文名     */_T("lib_AddCertPoolText")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[160]
},
{/*名称       */_T("Sunny_AddClientAuth")
,/*英文名     */_T("lib_AddClientAuth")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[162]
},
{/*名称       */_T("Sunny_CreateCA")
,/*英文名     */_T("lib_CreateCA")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */9
,/*参数地址   */&g_ArgInfo[164]
},
{/*名称       */_T("Sunny_ExportPub")
,/*英文名     */_T("lib_ExportPub")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[173]
},
{/*名称       */_T("Sunny_ExportKEY")
,/*英文名     */_T("lib_ExportKEY")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[174]
},
{/*名称       */_T("Sunny_ExportP12")
,/*英文名     */_T("lib_ExportP12")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[175]
},
{/*名称       */_T("Sunny_ExportCA")
,/*英文名     */_T("lib_ExportCA")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[178]
},
{/*名称       */_T("Sunny_Http_HTTPGetCode")
,/*英文名     */_T("lib_HTTPGetCode")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[179]
},
{/*名称       */_T("Sunny_Http_HTTPGetBody")
,/*英文名     */_T("lib_HTTPGetBody")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[180]
},
{/*名称       */_T("Sunny_Http_HTTPGetHeads")
,/*英文名     */_T("lib_HTTPGetHeads")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[181]
},
{/*名称       */_T("Sunny_Http_HTTPGetBodyLen")
,/*英文名     */_T("lib_HTTPGetBodyLen")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[182]
},
{/*名称       */_T("Sunny_Http_HTTPSendBin")
,/*英文名     */_T("lib_HTTPSendBin")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[183]
},
{/*名称       */_T("Sunny_Http_HTTPSetTimeouts")
,/*英文名     */_T("lib_HTTPSetTimeouts")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */4
,/*参数地址   */&g_ArgInfo[186]
},
{/*名称       */_T("Sunny_Http_HTTPSetProxyBasicAuth")
,/*英文名     */_T("lib_HTTPSetProxyBasicAuth")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[190]
},
{/*名称       */_T("Sunny_Http_HTTPSetProxyIP")
,/*英文名     */_T("lib_HTTPSetProxyIP")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[193]
},
{/*名称       */_T("Sunny_Http_HTTPSetHeader")
,/*英文名     */_T("lib_HTTPSetHeader")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[195]
},
{/*名称       */_T("Sunny_Http_HTTPOpen")
,/*英文名     */_T("lib_HTTPOpen")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[198]
},
{/*名称       */_T("Sunny_Http_HTTPClientGetErr")
,/*英文名     */_T("lib_HTTPClientGetErr")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_TEXT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[201]
},
{/*名称       */_T("Sunny_Http_RemoveHTTPClient")
,/*英文名     */_T("lib_RemoveHTTPClient")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[202]
},
{/*名称       */_T("Sunny_Http_CreateHTTPClient")
,/*英文名     */_T("lib_CreateHTTPClient")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */0
,/*参数地址   */NULL
},
{/*名称       */_T("Sunny_CreateSocketClient")
,/*英文名     */_T("lib_CreateSocketClient")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */0
,/*参数地址   */NULL
},
{/*名称       */_T("Sunny_RemoveSocketClient")
,/*英文名     */_T("lib_RemoveSocketClient")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[203]
},
{/*名称       */_T("Sunny_SocketClientDial")
,/*英文名     */_T("lib_SocketClientDial")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */9
,/*参数地址   */&g_ArgInfo[204]
},
{/*名称       */_T("Sunny_SocketClientClose")
,/*英文名     */_T("lib_SocketClientClose")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[213]
},
{/*名称       */_T("Sunny_SocketClientGetErr")
,/*英文名     */_T("lib_SocketClientGetErr")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_TEXT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[214]
},
{/*名称       */_T("Sunny_SocketClientWrite")
,/*英文名     */_T("lib_SocketClientWrite")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */4
,/*参数地址   */&g_ArgInfo[215]
},
{/*名称       */_T("Sunny_SocketClientReceive")
,/*英文名     */_T("lib_SocketClientReceive")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */3
,/*参数地址   */&g_ArgInfo[219]
},
{/*名称       */_T("Sunny_SocketClientSetBufferSize")
,/*英文名     */_T("lib_SocketClientSetBufferSize")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[222]
},
{/*名称       */_T("Sunny_MustTcp")
,/*英文名     */_T("lib_MustTcp")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[224]
},
{/*名称       */_T("Sunny_CreateWebsocket")
,/*英文名     */_T("lib_CreateWebsocket")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */0
,/*参数地址   */NULL
},
{/*名称       */_T("Sunny_RemoveWebsocket")
,/*英文名     */_T("lib_RemoveWebsocket")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[225]
},
{/*名称       */_T("Sunny_WebsocketDial")
,/*英文名     */_T("lib_WebsocketDial")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */10
,/*参数地址   */&g_ArgInfo[226]
},
{/*名称       */_T("Sunny_WebsocketClose")
,/*英文名     */_T("lib_WebsocketClose")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[236]
},
{/*名称       */_T("Sunny_WebsocketGetErr")
,/*英文名     */_T("lib_WebsocketGetErr")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_TEXT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[237]
},
{/*名称       */_T("Sunny_WebsocketReadWrite")
,/*英文名     */_T("lib_WebsocketReadWrite")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */4
,/*参数地址   */&g_ArgInfo[238]
},
{/*名称       */_T("Sunny_WebsocketClientReceive")
,/*英文名     */_T("lib_WebsocketClientReceive")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */4
,/*参数地址   */&g_ArgInfo[242]
},
{/*名称       */_T("Sunny_ScriptCall")
,/*英文名     */_T("lib_ScriptCall")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */2
,/*参数地址   */&g_ArgInfo[246]
},
{/*名称       */_T("Sunny_SetScript")
,/*英文名     */_T("lib_SetScript")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[248]
},
{/*名称       */_T("Sunny_GetRequestClientIp")
,/*英文名     */_T("lib_GetRequestClientIp")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_INT
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[249]
},
{/*名称       */_T("Sunny_SetTcpAgent")
,/*英文名     */_T("lib_SetTcpAgent")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */4
,/*参数地址   */&g_ArgInfo[250]
},
{/*名称       */_T("Sunny_TcpCloseClient")
,/*英文名     */_T("lib_TcpCloseClient")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */SDT_BOOL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[254]
},
{/*名称       */_T("Sunny_SetScriptLogCallAddress")
,/*英文名     */_T("lib_SetScriptLogCallAddress")
,/*说明       */NULL
,/*类别索引   */0
,/*状态       */NULL
,/*返回值类型 */_SDT_NULL
,/*保留       */0
,/*难度       */LVL_SIMPLE
,/*图像索引   */0
,/*图像数目   */0
,/*参数个数   */1
,/*参数地址   */&g_ArgInfo[255]
}
};

PFN_EXECUTE_CMD g_RunFunc[] = {
lib_PInit,
lib_SetIeProxy,
lib_GetResponseStatusCode,
lib_SetRequestProxy,
lib_SetCa,
lib_Geterr,
lib_Stop,
lib_GetResponseHeader,
lib_SetRequestUrl,
lib_DelResponseHeader,
lib_DelRequestHeader,
lib_SetRequestHeader,
lib_SetRequestCookie,
lib_SetResponseHeader,
lib_SetResponseAllHeader,
lib_SetResponseStatus,
lib_SetRequestAllCookie,
lib_GetRequestHeader,
lib_GetRequestCookie,
lib_GetRequestData,
lib_GetResponseData,
lib_SetRequestData,
lib_SetResponseData,
lib_GetResponseBody,
lib_GetRequestBody,
lib_GetRequestBodyLen,
lib_GetResponseBodyLen,
lib_GetRequestAllHeader,
lib_GetRequestALLCookie,
lib_GetResponseAllHeader,
lib_GetWebsocketBodyLen,
lib_GetWebsocketBody,
lib_SetWebsocketBody,
lib_SendWebsocketBody,
lib_NoticeTheRequest,
lib_OpenTcp,
lib_SetIpProxy,
lib_GetResponseStatus,
lib_SetIpAuth,
lib_SetProxyTimeout,
lib_SetTcpBody,
lib_HexDump,
lib_StartProcess,
lib_ProcessAddPID,
lib_ProcessDelPID,
lib_ProcessCancelAll,
lib_ProcessStart,
lib_SetTcpConnectionIP,
lib_TcpSendMsg,
lib_BrUnCompress,
lib_GzipUnCompress,
lib_DeflateUnCompress,
lib_BytesToInt,
lib_TcpSendMsgClient,
lib_Cfree,
lib_CreateKeys,
lib_RemoveKeys,
lib_KeysWriteLong,
lib_KeysWrite,
lib_KeysWriteStr,
lib_KeysWriteFloat,
lib_KeysWriteInt,
lib_KeysReadInt,
lib_KeysReadLong,
lib_KeysReadFloat,
lib_KeysRead,
lib_KeysEmpty,
lib_KeysDelete,
lib_KeysGetJson,
lib_Cfree_1,
lib_AddP12Certificate,
lib_WebpToPngBytes,
lib_DelP12Certificate,
lib_WebpToJpegBytes,
lib_WebpToPng,
lib_WebpToJpeg,
lib_CreateCertificate,
lib_RemoveCertificate,
lib_LoadP12Certificate,
lib_LoadX509KeyPair,
lib_LoadX509Certificate,
lib_SetInsecureSkipVerify,
lib_SetServerName,
lib_GetServerName,
lib_AddCertPoolPath,
lib_AddCertPoolText,
lib_AddClientAuth,
lib_CreateCA,
lib_ExportPub,
lib_ExportKEY,
lib_ExportP12,
lib_ExportCA,
lib_HTTPGetCode,
lib_HTTPGetBody,
lib_HTTPGetHeads,
lib_HTTPGetBodyLen,
lib_HTTPSendBin,
lib_HTTPSetTimeouts,
lib_HTTPSetProxyBasicAuth,
lib_HTTPSetProxyIP,
lib_HTTPSetHeader,
lib_HTTPOpen,
lib_HTTPClientGetErr,
lib_RemoveHTTPClient,
lib_CreateHTTPClient,
lib_CreateSocketClient,
lib_RemoveSocketClient,
lib_SocketClientDial,
lib_SocketClientClose,
lib_SocketClientGetErr,
lib_SocketClientWrite,
lib_SocketClientReceive,
lib_SocketClientSetBufferSize,
lib_MustTcp,
lib_CreateWebsocket,
lib_RemoveWebsocket,
lib_WebsocketDial,
lib_WebsocketClose,
lib_WebsocketGetErr,
lib_WebsocketReadWrite,
lib_WebsocketClientReceive,
lib_ScriptCall,
lib_SetScript,
lib_GetRequestClientIp,
lib_SetTcpAgent,
lib_TcpCloseClient,
lib_SetScriptLogCallAddress
};

static const char* const g_CmdNames[] = {
"lib_PInit",
"lib_SetIeProxy",
"lib_GetResponseStatusCode",
"lib_SetRequestProxy",
"lib_SetCa",
"lib_Geterr",
"lib_Stop",
"lib_GetResponseHeader",
"lib_SetRequestUrl",
"lib_DelResponseHeader",
"lib_DelRequestHeader",
"lib_SetRequestHeader",
"lib_SetRequestCookie",
"lib_SetResponseHeader",
"lib_SetResponseAllHeader",
"lib_SetResponseStatus",
"lib_SetRequestAllCookie",
"lib_GetRequestHeader",
"lib_GetRequestCookie",
"lib_GetRequestData",
"lib_GetResponseData",
"lib_SetRequestData",
"lib_SetResponseData",
"lib_GetResponseBody",
"lib_GetRequestBody",
"lib_GetRequestBodyLen",
"lib_GetResponseBodyLen",
"lib_GetRequestAllHeader",
"lib_GetRequestALLCookie",
"lib_GetResponseAllHeader",
"lib_GetWebsocketBodyLen",
"lib_GetWebsocketBody",
"lib_SetWebsocketBody",
"lib_SendWebsocketBody",
"lib_NoticeTheRequest",
"lib_OpenTcp",
"lib_SetIpProxy",
"lib_GetResponseStatus",
"lib_SetIpAuth",
"lib_SetProxyTimeout",
"lib_SetTcpBody",
"lib_HexDump",
"lib_StartProcess",
"lib_ProcessAddPID",
"lib_ProcessDelPID",
"lib_ProcessCancelAll",
"lib_ProcessStart",
"lib_SetTcpConnectionIP",
"lib_TcpSendMsg",
"lib_BrUnCompress",
"lib_GzipUnCompress",
"lib_DeflateUnCompress",
"lib_BytesToInt",
"lib_TcpSendMsgClient",
"lib_Cfree",
"lib_CreateKeys",
"lib_RemoveKeys",
"lib_KeysWriteLong",
"lib_KeysWrite",
"lib_KeysWriteStr",
"lib_KeysWriteFloat",
"lib_KeysWriteInt",
"lib_KeysReadInt",
"lib_KeysReadLong",
"lib_KeysReadFloat",
"lib_KeysRead",
"lib_KeysEmpty",
"lib_KeysDelete",
"lib_KeysGetJson",
"lib_Cfree_1",
"lib_AddP12Certificate",
"lib_WebpToPngBytes",
"lib_DelP12Certificate",
"lib_WebpToJpegBytes",
"lib_WebpToPng",
"lib_WebpToJpeg",
"lib_CreateCertificate",
"lib_RemoveCertificate",
"lib_LoadP12Certificate",
"lib_LoadX509KeyPair",
"lib_LoadX509Certificate",
"lib_SetInsecureSkipVerify",
"lib_SetServerName",
"lib_GetServerName",
"lib_AddCertPoolPath",
"lib_AddCertPoolText",
"lib_AddClientAuth",
"lib_CreateCA",
"lib_ExportPub",
"lib_ExportKEY",
"lib_ExportP12",
"lib_ExportCA",
"lib_HTTPGetCode",
"lib_HTTPGetBody",
"lib_HTTPGetHeads",
"lib_HTTPGetBodyLen",
"lib_HTTPSendBin",
"lib_HTTPSetTimeouts",
"lib_HTTPSetProxyBasicAuth",
"lib_HTTPSetProxyIP",
"lib_HTTPSetHeader",
"lib_HTTPOpen",
"lib_HTTPClientGetErr",
"lib_RemoveHTTPClient",
"lib_CreateHTTPClient",
"lib_CreateSocketClient",
"lib_RemoveSocketClient",
"lib_SocketClientDial",
"lib_SocketClientClose",
"lib_SocketClientGetErr",
"lib_SocketClientWrite",
"lib_SocketClientReceive",
"lib_SocketClientSetBufferSize",
"lib_MustTcp",
"lib_CreateWebsocket",
"lib_RemoveWebsocket",
"lib_WebsocketDial",
"lib_WebsocketClose",
"lib_WebsocketGetErr",
"lib_WebsocketReadWrite",
"lib_WebsocketClientReceive",
"lib_ScriptCall",
"lib_SetScript",
"lib_GetRequestClientIp",
"lib_SetTcpAgent",
"lib_TcpCloseClient",
"lib_SetScriptLogCallAddress"
};


#endif

