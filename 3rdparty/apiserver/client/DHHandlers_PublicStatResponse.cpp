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

#include "DHHandlers_PublicStatResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "DHHelpers.h"

namespace DeepinHomeAPI {

DHHandlers_PublicStatResponse::DHHandlers_PublicStatResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

DHHandlers_PublicStatResponse::DHHandlers_PublicStatResponse() {
    this->initializeModel();
}

DHHandlers_PublicStatResponse::~DHHandlers_PublicStatResponse() {}

void DHHandlers_PublicStatResponse::initializeModel() {

    m_collect_count_isSet = false;
    m_collect_count_isValid = false;

    m_like_count_isSet = false;
    m_like_count_isValid = false;

    m_public_id_isSet = false;
    m_public_id_isValid = false;

    m_view_count_isSet = false;
    m_view_count_isValid = false;
}

void DHHandlers_PublicStatResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void DHHandlers_PublicStatResponse::fromJsonObject(QJsonObject json) {

    m_collect_count_isValid = ::DeepinHomeAPI::fromJsonValue(collect_count, json[QString("collect_count")]);
    m_collect_count_isSet = !json[QString("collect_count")].isNull() && m_collect_count_isValid;

    m_like_count_isValid = ::DeepinHomeAPI::fromJsonValue(like_count, json[QString("like_count")]);
    m_like_count_isSet = !json[QString("like_count")].isNull() && m_like_count_isValid;

    m_public_id_isValid = ::DeepinHomeAPI::fromJsonValue(public_id, json[QString("public_id")]);
    m_public_id_isSet = !json[QString("public_id")].isNull() && m_public_id_isValid;

    m_view_count_isValid = ::DeepinHomeAPI::fromJsonValue(view_count, json[QString("view_count")]);
    m_view_count_isSet = !json[QString("view_count")].isNull() && m_view_count_isValid;
}

QString DHHandlers_PublicStatResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject DHHandlers_PublicStatResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_collect_count_isSet) {
        obj.insert(QString("collect_count"), ::DeepinHomeAPI::toJsonValue(collect_count));
    }
    if (m_like_count_isSet) {
        obj.insert(QString("like_count"), ::DeepinHomeAPI::toJsonValue(like_count));
    }
    if (m_public_id_isSet) {
        obj.insert(QString("public_id"), ::DeepinHomeAPI::toJsonValue(public_id));
    }
    if (m_view_count_isSet) {
        obj.insert(QString("view_count"), ::DeepinHomeAPI::toJsonValue(view_count));
    }
    return obj;
}

qint32 DHHandlers_PublicStatResponse::getCollectCount() const {
    return collect_count;
}
void DHHandlers_PublicStatResponse::setCollectCount(const qint32 &collect_count) {
    this->collect_count = collect_count;
    this->m_collect_count_isSet = true;
}

bool DHHandlers_PublicStatResponse::is_collect_count_Set() const{
    return m_collect_count_isSet;
}

bool DHHandlers_PublicStatResponse::is_collect_count_Valid() const{
    return m_collect_count_isValid;
}

qint32 DHHandlers_PublicStatResponse::getLikeCount() const {
    return like_count;
}
void DHHandlers_PublicStatResponse::setLikeCount(const qint32 &like_count) {
    this->like_count = like_count;
    this->m_like_count_isSet = true;
}

bool DHHandlers_PublicStatResponse::is_like_count_Set() const{
    return m_like_count_isSet;
}

bool DHHandlers_PublicStatResponse::is_like_count_Valid() const{
    return m_like_count_isValid;
}

QString DHHandlers_PublicStatResponse::getPublicId() const {
    return public_id;
}
void DHHandlers_PublicStatResponse::setPublicId(const QString &public_id) {
    this->public_id = public_id;
    this->m_public_id_isSet = true;
}

bool DHHandlers_PublicStatResponse::is_public_id_Set() const{
    return m_public_id_isSet;
}

bool DHHandlers_PublicStatResponse::is_public_id_Valid() const{
    return m_public_id_isValid;
}

qint32 DHHandlers_PublicStatResponse::getViewCount() const {
    return view_count;
}
void DHHandlers_PublicStatResponse::setViewCount(const qint32 &view_count) {
    this->view_count = view_count;
    this->m_view_count_isSet = true;
}

bool DHHandlers_PublicStatResponse::is_view_count_Set() const{
    return m_view_count_isSet;
}

bool DHHandlers_PublicStatResponse::is_view_count_Valid() const{
    return m_view_count_isValid;
}

bool DHHandlers_PublicStatResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_collect_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_like_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_public_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_view_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool DHHandlers_PublicStatResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace DeepinHomeAPI
