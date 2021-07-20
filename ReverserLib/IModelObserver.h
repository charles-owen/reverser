/**
 * @file IModelObserver.h
 * @author Charles B. Owen
 *
 * Interface for model observers
 *
 */

//
// Created by charl on 4/24/2021.
//

#ifndef REVERSER_IMODELOBSERVER_H
#define REVERSER_IMODELOBSERVER_H

/**
 * Interface for model observers
 */
class IModelObserver
{
public:
    virtual void UpdateObserver() = 0;
};

#endif //REVERSER_IMODELOBSERVER_H
