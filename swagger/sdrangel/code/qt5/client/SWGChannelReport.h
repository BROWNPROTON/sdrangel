/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400    --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGChannelReport.h
 *
 * Base channel report. The specific channel report present depends on channelType or paremt context.
 */

#ifndef SWGChannelReport_H_
#define SWGChannelReport_H_

#include <QJsonObject>


#include "SWGAMDemodReport.h"
#include "SWGAMModReport.h"
#include "SWGATVModReport.h"
#include "SWGBFMDemodReport.h"
#include "SWGNFMDemodReport.h"
#include "SWGNFMModReport.h"
#include "SWGSSBModReport.h"
#include "SWGUDPSinkReport.h"
#include "SWGWFMModReport.h"
#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGChannelReport: public SWGObject {
public:
    SWGChannelReport();
    SWGChannelReport(QString* json);
    virtual ~SWGChannelReport();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGChannelReport* fromJson(QString &jsonString) override;

    QString* getChannelType();
    void setChannelType(QString* channel_type);

    qint32 getTx();
    void setTx(qint32 tx);

    SWGAMDemodReport* getAmDemodReport();
    void setAmDemodReport(SWGAMDemodReport* am_demod_report);

    SWGAMModReport* getAmModReport();
    void setAmModReport(SWGAMModReport* am_mod_report);

    SWGATVModReport* getAtvModReport();
    void setAtvModReport(SWGATVModReport* atv_mod_report);

    SWGBFMDemodReport* getBfmDemodReport();
    void setBfmDemodReport(SWGBFMDemodReport* bfm_demod_report);

    SWGNFMDemodReport* getNfmDemodReport();
    void setNfmDemodReport(SWGNFMDemodReport* nfm_demod_report);

    SWGNFMModReport* getNfmModReport();
    void setNfmModReport(SWGNFMModReport* nfm_mod_report);

    SWGSSBModReport* getSsbModReport();
    void setSsbModReport(SWGSSBModReport* ssb_mod_report);

    SWGUDPSinkReport* getUdpSinkReport();
    void setUdpSinkReport(SWGUDPSinkReport* udp_sink_report);

    SWGWFMModReport* getWfmModReport();
    void setWfmModReport(SWGWFMModReport* wfm_mod_report);


    virtual bool isSet() override;

private:
    QString* channel_type;
    bool m_channel_type_isSet;

    qint32 tx;
    bool m_tx_isSet;

    SWGAMDemodReport* am_demod_report;
    bool m_am_demod_report_isSet;

    SWGAMModReport* am_mod_report;
    bool m_am_mod_report_isSet;

    SWGATVModReport* atv_mod_report;
    bool m_atv_mod_report_isSet;

    SWGBFMDemodReport* bfm_demod_report;
    bool m_bfm_demod_report_isSet;

    SWGNFMDemodReport* nfm_demod_report;
    bool m_nfm_demod_report_isSet;

    SWGNFMModReport* nfm_mod_report;
    bool m_nfm_mod_report_isSet;

    SWGSSBModReport* ssb_mod_report;
    bool m_ssb_mod_report_isSet;

    SWGUDPSinkReport* udp_sink_report;
    bool m_udp_sink_report_isSet;

    SWGWFMModReport* wfm_mod_report;
    bool m_wfm_mod_report_isSet;

};

}

#endif /* SWGChannelReport_H_ */
