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

#include "DHHandlers_FeedbackPublicListResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "DHHelpers.h"

namespace DeepinHomeAPI {

DHHandlers_FeedbackPublicListResponse::DHHandlers_FeedbackPublicListResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

DHHandlers_FeedbackPublicListResponse::DHHandlers_FeedbackPublicListResponse() {
    this->initializeModel();
}

DHHandlers_FeedbackPublicListResponse::~DHHandlers_FeedbackPublicListResponse() {}

void DHHandlers_FeedbackPublicListResponse::initializeModel() {

    m_avatar_isSet = false;
    m_avatar_isValid = false;

    m_content_isSet = false;
    m_content_isValid = false;

    m_created_at_isSet = false;
    m_created_at_isValid = false;

    m_module_id_isSet = false;
    m_module_id_isValid = false;

    m_nickname_isSet = false;
    m_nickname_isValid = false;

    m_public_id_isSet = false;
    m_public_id_isValid = false;

    m_screenshots_isSet = false;
    m_screenshots_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_system_version_isSet = false;
    m_system_version_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_updated_at_isSet = false;
    m_updated_at_isValid = false;

    m_user_public_id_isSet = false;
    m_user_public_id_isValid = false;

    m_username_isSet = false;
    m_username_isValid = false;
}

void DHHandlers_FeedbackPublicListResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void DHHandlers_FeedbackPublicListResponse::fromJsonObject(QJsonObject json) {

    m_avatar_isValid = ::DeepinHomeAPI::fromJsonValue(avatar, json[QString("avatar")]);
    m_avatar_isSet = !json[QString("avatar")].isNull() && m_avatar_isValid;

    m_content_isValid = ::DeepinHomeAPI::fromJsonValue(content, json[QString("content")]);
    m_content_isSet = !json[QString("content")].isNull() && m_content_isValid;

    m_created_at_isValid = ::DeepinHomeAPI::fromJsonValue(created_at, json[QString("created_at")]);
    m_created_at_isSet = !json[QString("created_at")].isNull() && m_created_at_isValid;

    m_module_id_isValid = ::DeepinHomeAPI::fromJsonValue(module_id, json[QString("module_id")]);
    m_module_id_isSet = !json[QString("module_id")].isNull() && m_module_id_isValid;

    m_nickname_isValid = ::DeepinHomeAPI::fromJsonValue(nickname, json[QString("nickname")]);
    m_nickname_isSet = !json[QString("nickname")].isNull() && m_nickname_isValid;

    m_public_id_isValid = ::DeepinHomeAPI::fromJsonValue(public_id, json[QString("public_id")]);
    m_public_id_isSet = !json[QString("public_id")].isNull() && m_public_id_isValid;

    m_screenshots_isValid = ::DeepinHomeAPI::fromJsonValue(screenshots, json[QString("screenshots")]);
    m_screenshots_isSet = !json[QString("screenshots")].isNull() && m_screenshots_isValid;

    m_status_isValid = ::DeepinHomeAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_system_version_isValid = ::DeepinHomeAPI::fromJsonValue(system_version, json[QString("system_version")]);
    m_system_version_isSet = !json[QString("system_version")].isNull() && m_system_version_isValid;

    m_title_isValid = ::DeepinHomeAPI::fromJsonValue(title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_type_isValid = ::DeepinHomeAPI::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_updated_at_isValid = ::DeepinHomeAPI::fromJsonValue(updated_at, json[QString("updated_at")]);
    m_updated_at_isSet = !json[QString("updated_at")].isNull() && m_updated_at_isValid;

    m_user_public_id_isValid = ::DeepinHomeAPI::fromJsonValue(user_public_id, json[QString("user_public_id")]);
    m_user_public_id_isSet = !json[QString("user_public_id")].isNull() && m_user_public_id_isValid;

    m_username_isValid = ::DeepinHomeAPI::fromJsonValue(username, json[QString("username")]);
    m_username_isSet = !json[QString("username")].isNull() && m_username_isValid;
}

QString DHHandlers_FeedbackPublicListResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject DHHandlers_FeedbackPublicListResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_avatar_isSet) {
        obj.insert(QString("avatar"), ::DeepinHomeAPI::toJsonValue(avatar));
    }
    if (m_content_isSet) {
        obj.insert(QString("content"), ::DeepinHomeAPI::toJsonValue(content));
    }
    if (m_created_at_isSet) {
        obj.insert(QString("created_at"), ::DeepinHomeAPI::toJsonValue(created_at));
    }
    if (m_module_id_isSet) {
        obj.insert(QString("module_id"), ::DeepinHomeAPI::toJsonValue(module_id));
    }
    if (m_nickname_isSet) {
        obj.insert(QString("nickname"), ::DeepinHomeAPI::toJsonValue(nickname));
    }
    if (m_public_id_isSet) {
        obj.insert(QString("public_id"), ::DeepinHomeAPI::toJsonValue(public_id));
    }
    if (screenshots.size() > 0) {
        obj.insert(QString("screenshots"), ::DeepinHomeAPI::toJsonValue(screenshots));
    }
    if (m_status_isSet) {
        obj.insert(QString("status"), ::DeepinHomeAPI::toJsonValue(status));
    }
    if (m_system_version_isSet) {
        obj.insert(QString("system_version"), ::DeepinHomeAPI::toJsonValue(system_version));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::DeepinHomeAPI::toJsonValue(title));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::DeepinHomeAPI::toJsonValue(type));
    }
    if (m_updated_at_isSet) {
        obj.insert(QString("updated_at"), ::DeepinHomeAPI::toJsonValue(updated_at));
    }
    if (m_user_public_id_isSet) {
        obj.insert(QString("user_public_id"), ::DeepinHomeAPI::toJsonValue(user_public_id));
    }
    if (m_username_isSet) {
        obj.insert(QString("username"), ::DeepinHomeAPI::toJsonValue(username));
    }
    return obj;
}

QString DHHandlers_FeedbackPublicListResponse::getAvatar() const {
    return avatar;
}
void DHHandlers_FeedbackPublicListResponse::setAvatar(const QString &avatar) {
    this->avatar = avatar;
    this->m_avatar_isSet = true;
}

bool DHHandlers_FeedbackPublicListResponse::is_avatar_Set() const{
    return m_avatar_isSet;
}

bool DHHandlers_FeedbackPublicListResponse::is_avatar_Valid() const{
    return m_avatar_isValid;
}

QString DHHandlers_FeedbackPublicListResponse::getContent() const {
    return content;
}
void DHHandlers_FeedbackPublicListResponse::setContent(const QString &content) {
    this->content = content;
    this->m_content_isSet = true;
}

bool DHHandlers_FeedbackPublicListResponse::is_content_Set() const{
    return m_content_isSet;
}

bool DHHandlers_FeedbackPublicListResponse::is_content_Valid() const{
    return m_content_isValid;
}

QString DHHandlers_FeedbackPublicListResponse::getCreatedAt() const {
    return created_at;
}
void DHHandlers_FeedbackPublicListResponse::setCreatedAt(const QString &created_at) {
    this->created_at = created_at;
    this->m_created_at_isSet = true;
}

bool DHHandlers_FeedbackPublicListResponse::is_created_at_Set() const{
    return m_created_at_isSet;
}

bool DHHandlers_FeedbackPublicListResponse::is_created_at_Valid() const{
    return m_created_at_isValid;
}

qint32 DHHandlers_FeedbackPublicListResponse::getModuleId() const {
    return module_id;
}
void DHHandlers_FeedbackPublicListResponse::setModuleId(const qint32 &module_id) {
    this->module_id = module_id;
    this->m_module_id_isSet = true;
}

bool DHHandlers_FeedbackPublicListResponse::is_module_id_Set() const{
    return m_module_id_isSet;
}

bool DHHandlers_FeedbackPublicListResponse::is_module_id_Valid() const{
    return m_module_id_isValid;
}

QString DHHandlers_FeedbackPublicListResponse::getNickname() const {
    return nickname;
}
void DHHandlers_FeedbackPublicListResponse::setNickname(const QString &nickname) {
    this->nickname = nickname;
    this->m_nickname_isSet = true;
}

bool DHHandlers_FeedbackPublicListResponse::is_nickname_Set() const{
    return m_nickname_isSet;
}

bool DHHandlers_FeedbackPublicListResponse::is_nickname_Valid() const{
    return m_nickname_isValid;
}

QString DHHandlers_FeedbackPublicListResponse::getPublicId() const {
    return public_id;
}
void DHHandlers_FeedbackPublicListResponse::setPublicId(const QString &public_id) {
    this->public_id = public_id;
    this->m_public_id_isSet = true;
}

bool DHHandlers_FeedbackPublicListResponse::is_public_id_Set() const{
    return m_public_id_isSet;
}

bool DHHandlers_FeedbackPublicListResponse::is_public_id_Valid() const{
    return m_public_id_isValid;
}

QList<QString> DHHandlers_FeedbackPublicListResponse::getScreenshots() const {
    return screenshots;
}
void DHHandlers_FeedbackPublicListResponse::setScreenshots(const QList<QString> &screenshots) {
    this->screenshots = screenshots;
    this->m_screenshots_isSet = true;
}

bool DHHandlers_FeedbackPublicListResponse::is_screenshots_Set() const{
    return m_screenshots_isSet;
}

bool DHHandlers_FeedbackPublicListResponse::is_screenshots_Valid() const{
    return m_screenshots_isValid;
}

QString DHHandlers_FeedbackPublicListResponse::getStatus() const {
    return status;
}
void DHHandlers_FeedbackPublicListResponse::setStatus(const QString &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool DHHandlers_FeedbackPublicListResponse::is_status_Set() const{
    return m_status_isSet;
}

bool DHHandlers_FeedbackPublicListResponse::is_status_Valid() const{
    return m_status_isValid;
}

QString DHHandlers_FeedbackPublicListResponse::getSystemVersion() const {
    return system_version;
}
void DHHandlers_FeedbackPublicListResponse::setSystemVersion(const QString &system_version) {
    this->system_version = system_version;
    this->m_system_version_isSet = true;
}

bool DHHandlers_FeedbackPublicListResponse::is_system_version_Set() const{
    return m_system_version_isSet;
}

bool DHHandlers_FeedbackPublicListResponse::is_system_version_Valid() const{
    return m_system_version_isValid;
}

QString DHHandlers_FeedbackPublicListResponse::getTitle() const {
    return title;
}
void DHHandlers_FeedbackPublicListResponse::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}

bool DHHandlers_FeedbackPublicListResponse::is_title_Set() const{
    return m_title_isSet;
}

bool DHHandlers_FeedbackPublicListResponse::is_title_Valid() const{
    return m_title_isValid;
}

QString DHHandlers_FeedbackPublicListResponse::getType() const {
    return type;
}
void DHHandlers_FeedbackPublicListResponse::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool DHHandlers_FeedbackPublicListResponse::is_type_Set() const{
    return m_type_isSet;
}

bool DHHandlers_FeedbackPublicListResponse::is_type_Valid() const{
    return m_type_isValid;
}

QString DHHandlers_FeedbackPublicListResponse::getUpdatedAt() const {
    return updated_at;
}
void DHHandlers_FeedbackPublicListResponse::setUpdatedAt(const QString &updated_at) {
    this->updated_at = updated_at;
    this->m_updated_at_isSet = true;
}

bool DHHandlers_FeedbackPublicListResponse::is_updated_at_Set() const{
    return m_updated_at_isSet;
}

bool DHHandlers_FeedbackPublicListResponse::is_updated_at_Valid() const{
    return m_updated_at_isValid;
}

QString DHHandlers_FeedbackPublicListResponse::getUserPublicId() const {
    return user_public_id;
}
void DHHandlers_FeedbackPublicListResponse::setUserPublicId(const QString &user_public_id) {
    this->user_public_id = user_public_id;
    this->m_user_public_id_isSet = true;
}

bool DHHandlers_FeedbackPublicListResponse::is_user_public_id_Set() const{
    return m_user_public_id_isSet;
}

bool DHHandlers_FeedbackPublicListResponse::is_user_public_id_Valid() const{
    return m_user_public_id_isValid;
}

QString DHHandlers_FeedbackPublicListResponse::getUsername() const {
    return username;
}
void DHHandlers_FeedbackPublicListResponse::setUsername(const QString &username) {
    this->username = username;
    this->m_username_isSet = true;
}

bool DHHandlers_FeedbackPublicListResponse::is_username_Set() const{
    return m_username_isSet;
}

bool DHHandlers_FeedbackPublicListResponse::is_username_Valid() const{
    return m_username_isValid;
}

bool DHHandlers_FeedbackPublicListResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_avatar_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_content_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_module_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_nickname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_public_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (screenshots.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_system_version_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_updated_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_public_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_username_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool DHHandlers_FeedbackPublicListResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace DeepinHomeAPI
