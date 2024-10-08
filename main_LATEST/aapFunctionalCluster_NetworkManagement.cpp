/******************************************************************************/
/* File   : aapFunctionalCluster_NetworkManagement.cpp                        */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "interface_NetworkManagement_NetworkHandle.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class aapFunctionalCluster_NetworkManagement:
      public interface_NetworkManagement_NetworkHandle
{
   public:
      void GetNetworkRequestedState                      (void);
      void GetNetworkState                               (void);
      void RegisterNetworkRequestedStateChangeNotifier   (void);
      void RegisterNetworkStateChangeNotifier            (void);
      void SetNetworkRequestedState                      (void);
      void UnregisterNetworkRequestedStateChangeNotifier (void);
      void UnregisterNetworkStateChangeNotifier          (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void aapFunctionalCluster_NetworkManagement::GetNetworkRequestedState(void){
}

void aapFunctionalCluster_NetworkManagement::GetNetworkState(void){
}

void aapFunctionalCluster_NetworkManagement::RegisterNetworkRequestedStateChangeNotifier(void){
}

void aapFunctionalCluster_NetworkManagement::RegisterNetworkStateChangeNotifier(void){
}

void aapFunctionalCluster_NetworkManagement::SetNetworkRequestedState(void){
}

void aapFunctionalCluster_NetworkManagement::UnregisterNetworkRequestedStateChangeNotifier(void){
}

void aapFunctionalCluster_NetworkManagement::UnregisterNetworkStateChangeNotifier(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
