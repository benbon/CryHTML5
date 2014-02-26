/* HTML5_Plugin - for licensing and copyright see license.txt */

#include <IPluginBase.h>

#pragma once

/**
* @brief HTML5 Plugin Namespace
*/
namespace HTML5Plugin
{
    /**
    * @brief plugin HTML5 concrete interface
    */
    struct IPluginHTML5
    {
        /**
        * @brief Get Plugin base interface
        */
        virtual PluginManager::IPluginBase* GetBase() = 0;

        // TODO: Add your concrete interface declaration here
    };
};