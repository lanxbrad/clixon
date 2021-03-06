# Clixon roadmap

## High prio
- Special handling of the initial startup transaction to avoid exit at startup
  - Possibly - draft-wu-netconf-restconf-factory-restore-03
  - See (startup.md)
- Handle revisions to data model.
  - Possibly draft-wang-netmod-module-revision-management-01
  - See (startup.md)
- (DONE) NACM (RFC 8341) 
  - NACM support for create, read, update, delete operations 
  - ACM support for specifying a module name other than '*' 
- (DONE)XML [Namespace handling](https://github.com/clicon/clixon/issues/49) (DONE)

## Medium prio:
- Support a plugin callback that is invoked when copy-config is called.
- Preserve CLI command history across sessions. The up/down arrows
- (DONE)Support for XML regex's.
  - Currently Posix extended regular expressions
- (DONE) Input validation on custom RPCs/
  - [Sanity checks](https://github.com/clicon/clixon/issues/47)
  
## Low prio:
- Provide a client library to access netconf APIs provided by system services.
  - Netconf backend (Clixon acts as netconf controller)
- Support for restconf call-home (RFC 8071)

Not prioritized:
- Support for restconf PATCH method
- NETCONF
  - Support for additional Netconf [edit-config modes](https://github.com/clicon/clixon/issues/53)
  - Netconf [framing](https://github.com/clicon/clixon/issues/50)
  - [Child ordering](https://github.com/clicon/clixon/issues/22)
- Restconf
  - Query parameters
- Streams (netconf and restconf)
  - Extend native stream mode with external persistent timeseries database, eg influxdb.
- (DONE)Jenkins/Travis CI/CD and webhooks
- YANG
  - RFC 6022 [NETCONF monitoring](https://github.com/clicon/clixon/issues/39)
  - Deviation, min/max-elements, action, unique
- Containers
  - (DONE)[Docker improvements](https://github.com/clicon/clixon/issues/44)
  - Kubernetes Helm chart definition
- [gRPC](https://github.com/clicon/clixon/issues/43)



