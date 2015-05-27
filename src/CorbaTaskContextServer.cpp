#include "CorbaTaskContextServer.hpp"
#include <rtt/remote/TypedTaskContextServerGenerator.hpp>
#include <rtt/remote/TaskContextServerFactory.hpp>

using namespace RTT::Communication;

/**
 * @brief Constructor of the Corba Task Context Server.
 */
CorbaTaskContextServer::CorbaTaskContextServer()
{
}

/**
 * @brief Destructor of the Corba Task Context Server.
 */
CorbaTaskContextServer::~CorbaTaskContextServer()
{
}

/**
 * @brief This method sets up the task context server generator for the 
 * Corba implementation, i.e. it registers this type at the generator.
 * 
 * @return void
 */
void CorbaTaskContextServer::SetupGenerator()
{
  // Create a shared pointer to a typed TCS generator for the corba implementation
  ITaskContextServerGenerator::shared_ptr pCorbaTCSGenerator( new TypedTaskContextServerGenerator<CorbaTaskContextServer>("CORBA_TCS") );
  
  // Register the pointer to this typed generator at the TCS factory
  TaskContextServerFactory::GetInstance()->RegisterTaskContextServerGenerator("CORBA_TCS", pCorbaTCSGenerator);
}

/**
 * @brief Registers the given taskcontext at the given name services.
 * 
 * @param pTaskContext Reference to the task context.
 * @return bool
 */
bool CorbaTaskContextServer::AttachTo(RTT::TaskContext* pTaskContext)
{
  return true;
}

/**
 * @brief Starts the execution of task context.
 * 
 * @param StartThreaded Determines, whether the task context shall be started in the current thread or in its own thread.
 * @return bool
 */
bool CorbaTaskContextServer::Start(bool StartThreaded)
{
  return true;
}

/**
 * @brief Stops the execution of the task context.
 * 
 * @return bool
 */
bool CorbaTaskContextServer::Stop()
{
  return true;
}

/**
 * @brief Deletes a TaskContext server for a given task context.
 * 
 * @param pTaskContext Reference to the task context.
 * @return bool
 */
bool CorbaTaskContextServer::Delete(RTT::TaskContext* pTaskContext)
{
  return true;
}
/**
 * @brief Deletes all existing task context server objects.
 * 
 * @return bool
 */
bool CorbaTaskContextServer::DeleteAll()
{
  return true;
}