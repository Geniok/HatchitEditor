/**
**    Hatchit Editor
**    Copyright(c) 2015 Third-Degree
**
**    GNU General Public License
**    This file may be used under the terms of 
**    the GNU General Public License version 3 as published by the Free
**    Software Foundation and appearing in the file LICENSE.GPLv3 included
**    in the packaging of this file. Please review the following information
**    to ensure the GNU General Public License requirements
**    will be met: https://www.gnu.org/licenses/gpl.html
**
**/

#pragma once

#include <QMainWindow>




namespace Hatchit {

    namespace Editor {

        class MenuBar;
        class SceneTree;
        class WinView;

        class Window : public QMainWindow
        {
            Q_OBJECT
        public:
            Window(QWidget* parent = 0);

            ~Window();


            void setProjectPath(QString path);

        protected slots:
            void OnFileNew();
            void OnFileOpen();
            void OnFileSave();
            void OnFileExit();

            void OnHelpAbout();


        private:
            MenuBar*                    m_menuBar;
            SceneTree*                  m_sceneTree;
            WinView*                    m_view;
            /*WinView*                    m_view;
            Console*                    m_console;
            SceneTree*                  m_sceneTree;
            ProjectViewContainer*       m_projViewCont;
            QString                     m_projPath;
             */

            void ConnectMenuSlots();
        };

    }
}
