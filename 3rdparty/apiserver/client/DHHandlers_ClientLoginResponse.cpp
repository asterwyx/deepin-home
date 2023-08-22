/**
 * Deepin官网
 * deepin的官方网站后台接口
 *
 * The version of the OpenAPI document: 1.0
 * Contact: wurongjie@deepin.org
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "DHHandlers_ClientLoginResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "DHHelpers.h"

namespace DeepinHomeAPI {

DHHandlers_ClientLoginResponse::DHHandlers_ClientLoginResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

DHHandlers_ClientLoginResponse::DHHandlers_ClientLoginResponse() {
    this->initializeModel();
}

DHHandlers_ClientLoginResponse::~DHHandlers_ClientLoginResponse() {}

void DHHandlers_ClientLoginResponse::initializeModel() {

    m_token_isSet = false;
    m_token_isValid = false;
}

void DHHandlers_ClientLoginResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void DHHandlers_ClientLoginResponse::fromJsonObject(QJsonObject json) {

    m_token_isValid = ::DeepinHomeAPI::fromJsonValue(token, json[QString("token")]);
    m_token_isSet = !json[QString("token")].isNull() && m_token_isValid;
}

QString DHHandlers_ClientLoginResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject DHHandlers_ClientLoginResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_token_isSet) {
        obj.insert(QString("token"), ::DeepinHomeAPI::toJsonValue(token));
    }
    return obj;
}

QString DHHandlers_ClientLoginResponse::getToken() const {
    return token;
}
void DHHandlers_ClientLoginResponse::setToken(const QString &token) {
    this->token = token;
    this->m_token_isSet = true;
}

bool DHHandlers_ClientLoginResponse::is_token_Set() const{
    return m_token_isSet;
}

bool DHHandlers_ClientLoginResponse::is_token_Valid() const{
    return m_token_isValid;
}

bool DHHandlers_ClientLoginResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_token_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool DHHandlers_ClientLoginResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace DeepinHomeAPI