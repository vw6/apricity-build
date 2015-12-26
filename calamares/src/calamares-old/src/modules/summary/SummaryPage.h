/* === This file is part of Calamares - <http://github.com/calamares> ===
 *
 *   Copyright 2014-2015, Teo Mrnjavac <teo@kde.org>
 *
 *   Calamares is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   Calamares is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Calamares. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SUMMARYPAGE_H
#define SUMMARYPAGE_H

#include "Typedefs.h"

#include <QWidget>

class QLabel;
class QScrollArea;
class QVBoxLayout;
class SummaryViewStep;

class SummaryPage : public QWidget
{
    Q_OBJECT
public:
    explicit SummaryPage( const SummaryViewStep* thisViewStep, QWidget* parent = nullptr );

    void onActivate();

private:
    Calamares::ViewStepList stepsForSummary( const Calamares::ViewStepList& allSteps ) const;

    const SummaryViewStep* m_thisViewStep;

    QVBoxLayout* m_layout = nullptr;
    QWidget* m_contentWidget = nullptr;

    void createContentWidget();
    QLabel* createTitleLabel( const QString& text ) const;
    QLabel* createBodyLabel( const QString& text ) const;

    QScrollArea* m_scrollArea;
};

#endif // SUMMARYPAGE_H
