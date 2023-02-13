cmake_minimum_required(VERSION 3.5)

project(intehkom VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
#Окно партии
        partieswindow.h
        partieswindow.cpp
        partieswindow.ui
#Окно объёмы
        volumewindow.h
        volumewindow.cpp
        volumewindow.ui
#Окно таблицы сортировки
        sortingtablewindow.h
        sortingtablewindow.cpp
        sortingtablewindow.ui
#Окно таблицы автосорта
        autosortwindow.h
        autosortwindow.cpp
        autosortwindow.ui
#Окно таблицы автосорта
        pocketswindow.h
        pocketswindow.cpp
        pocketswindow.ui
#Окно справочников
        referenceswindow.h
        referenceswindow.cpp
        referenceswindow.ui
#Окно настроек
        settingswindow.h
        settingswindow.cpp
        settingswindow.ui
#Окно добавления правил
        addrulewindow.h
        addrulewindow.cpp
        addrulewindow.ui
#Окно добавления правил
        addpartieswindow.h
        addpartieswindow.cpp
        addpartieswindow.ui
#Окно настройки сортировочной линии
        settinglinewindow.h
        settinglinewindow.cpp
        settinglinewindow.ui
#Окно настройки кнопок пульта оператора
        settingbuttonswindow.h
        settingbuttonswindow.cpp
        settingbuttonswindow.ui
#Окно настройки обработки
        settingprocessingwindow.h
        settingprocessingwindow.cpp
        settingprocessingwindow.ui
)

find_package(Qt6 REQUIRED COMPONENTS Sql)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(intehkom
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET intehkom APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(intehkom SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(intehkom
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(intehkom PRIVATE Qt6::Sql)

target_link_libraries(intehkom PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(intehkom PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS intehkom
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(intehkom)
endif()
