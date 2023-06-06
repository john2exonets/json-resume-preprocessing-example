//
//  test.cpp
//
//  -- My test resume to see if my idea of using the cpp program to create different resumes from one file
//  will work or not.
//
//  John D. Allen
//  June, 2023
//

//
//  Set which resume you want created as a #define in the resume.h file
#include "resume.h"

{
  "$schema": "https://raw.githubusercontent.com/jsonresume/resume-schema/v1.0.0/schema.json",
  "basics": {
    "name": "John Allen",
#ifdef CLOUD
    "label": "Helping Companies get More Value from the Cloud | Author | Speaker",
#endif
#ifdef IOT
    "label": "Helping Companies get More Value from IoT | Author | Speaker",
#endif
    "image": "",
    "email": "unmogg+jobs@gmail.com",
    "phone": "",
    "url": "",
    "summary": "I love Creating Solutions and Solving Problems!  I love it even more when it involves Customers....and \
    even more than that when it involves Customers trying to gain better Value from their move to the Cloud!  While I \
    started out using Punch Cards to program Mainframe computers, I have always subscribed to the idea of \"Always Be Learning\" \
    (or ABL) my entire career to where I now get to Architect Cloud solutions.\n\nBeing a Multipotentialist, I have always \
    been curious about many forms of Technology. I write Programs, I use APIs, I Integrate Multiple Products (or \"Mashup\" as \
    it was once known), I hookup Networks -- Ethernet, Radio, Cellular, or WiFi.  I love to Write-up how these solutions work \
    and how to create them Yourself and get them Published. I even do Presentations at Conferences when I can. I Love all \
    things IoT, and our home is monitored and run by IoT devices I build Myself.\n\nWith my Global Solutions Architect position \
    at A10 Networks, I get to meet with Customer from Around the World, hear what they are Doing in the Cloud, and Help Solve \
    their Problems! I am fully vaccinated + 2 boosters against Covid-19.",
    "location": {
      "countryCode": "US",
      "address": "Parker, TX, USA"
    },
    "profiles": [
      {
        "network": "LinkedIn",
        "username": "johndallen",
        "url": "https://www.linkedin.com/in/johndallen/"
      },
      {
        "network": "GitHub",
        "url": "https://github.com/john2exonets?tab=repositories"
      }
#ifdef CLOUD
,
      {
        "network": "GitHub",
        "url": "https://github.com/jdallen-a10?tab=repositories"
      }
#endif
    ]
  },
  "work": [
    {
      "company": "A10 Networks, Inc",
      "name": "A10 Networks, Inc",
      "position": "Global Solutions Architect - Cloud, Edge, & Automation",
      "startDate": "2021-01-31",
      "endDate": "",
      "url": "https://a10networks.com",
      "highlights": [],
      "summary": "Helping customers get the most value out of their move to the Cloud. Helped create Cloud and Software \
      roadmap for the company. Created an OPA Proxy so that Network Security Policy could be ingested by Thunder ADC and \
      CFW. Used HashiCorp Terraform to implement IaC and Automation projects. Created solution to Autoscale a Kubernetes \
      Deployment based on ADC traffic Throughput.",
      "location": "Dallas-Fort Worth Metroplex"
    },
    {
      "company": "A10 Networks, Inc",
      "name": "A10 Networks, Inc",
      "position": "Sr. Systems Engineer - Global Strategic Accounts",
      "startDate": "2018-08-31",
      "endDate": "2021-01-31",
      "url": "https://a10networks.com",
      "highlights": [],
      "summary": "Designing and providing security solutions to Service Providers and Web Monsters. Working to deploy automated \
      DDoS solutions into Fortune 20 customers.  Member of the DDoS SME Team. Member of the Cloud & Container SME Team. Created \
      Fluentd proxy.",
      "location": "Dallas/Fort Worth Area"
    },
    {
      "company": "F5 Networks",
      "name": "F5 Networks",
      "position": "Senior Solution Architect",
      "startDate": "2016-10-31",
      "endDate": "2018-03-31",
      "highlights": [],
      "summary": "Working with vendors around the world in the Cloud and Container space, I help create solutions with our partners \
      like Red Hat, Pivotal, Docker, Equinix, IBM, HP, Cisco, and others, that help them sell their solutions into customers.  Help \
      set company direction with respect to product features and use case solutions. Present papers/give training at conferences. \
      Designed Multi-Cloud failover architecture for Cloud Foundry and OpenShift.  Assisted M&A group with technical evaluations of \
      target companies.  Developed company demo for support of MQTT protocol. Wrote white papers and blog entries regarding Cloud \
      and Container technical topics.",
      "url": "https://f5.com/",
      "location": "Dallas/Fort Worth Area"
    },
    {
      "company": "F5 Networks",
      "name": "F5 Networks",
      "position": "Solution Architect",
      "startDate": "2015-10-31",
      "endDate": "2016-10-31",
      "highlights": [],
      "summary": "Working with vendors in the Mobile space, I help create solutions with our partners like Ericsson, Nokia, \
      Alcatel-Lucent, Skyfire, Openwave, IBM, HP, Cisco, and others, that help them sell their solutions into Wireless Carriers. \
      Most solutions now are Cloud based.",
      "url": "https:/f5.com/"
    },
    {
      "company": "F5 Networks",
      "name": "F5 Networks",
      "position": "Principal Signaling Engineer",
      "startDate": "2013-10-31",
      "endDate": "2015-10-31",
      "highlights": [],
      "summary": "Working with vendors in the Mobile space, I help create solutions with our partners like Genband, Ericsson, \
      Nokia, Alcatel-Lucent, Openwave, IBM, HP, Cisco, and others, that help them sell their solutions into 4G/LTE/3GPP Signaling \
      environments.",
      "url": "https://f5.com/",
      "location": "Dallas/Fort Worth Area"
    },
    {
      "company": "F5 Networks",
      "name": "F5 Networks",
      "position": "Principal Telecom Solutions Engineer",
      "startDate": "2010-12-31",
      "endDate": "2013-09-30",
      "highlights": [],
      "summary": "Working with vendors in the Mobile space, I help create solutions with our partners like Ericsson, Nokia-Siemens, \
      Alcatel-Lucent, Skyfire, Genband, Sonus, Openwave, and others, that add functionality and create compelling, value-added \
      solutions to help our partners sell more. I do a lot of work with vendor solutions like policy enforcement, Diameter routing, \
      traffic steering, billing systems, solution scaling, and solution security.",
      "website": "https://f5.com/",
      "location": "Greater Seattle Area"
    }
  ],
  "awards": [
    {
      "title": "100% Club Winner",
      "date": "2021",
      "awarder": "A10 Networks"
    },
    {
      "title": "High Five Award",
      "date": "2016-04",
      "awarder": "F5 Networks",
      "summary": "Recognized by peers for outstanding work in helping to close business with large service provider customers."
    }
  ],
    "certificates": [
    {
      "name": "FCC Amateur Radio Operator, General Class, KD7SEE",
      "issuer": "Federal Communication Commission",
      "startDate": "2002-03-31"
    },
    {
      "name": "Work Visa, Brazil, 2023",
      "issuer": "Brazil",
      "endDate": "2023-12-31",
      "startDate": "2013-12-31"
    },
    {
      "name": "Certified Calico Operator: Level 1",
      "issuer": "Tigera",
      "startDate": "2022-02-28"
    }
  ],
  "skills": [
#ifdef SALES
    {
      "name": "Sales",
      "keywords": [
        "Challenger Sales",
        "Miller Heiman Large Account Management Process (LAMP)",
        "Salesforce",
        "Pipline Management",
        "Powerpoint/Word/Excel"
      ]
    },
#endif
#ifdef CLOUD
    {
      "name": "Cloud",
      "level": "",
      "keywords": [
        "Kubernetes",
        "Red Hat OpenShift",
        "Ubuntu MicroK8s",
        "Rancher K3OS",
        "CNCF Prometheus",
        "CNCF Fluentd",
        "CNCF OPA",
        "CNCF OpenTelemetry",
        "CNCF Jager",
        "ElasticSearch",
        "Kibana",
        "AWS",
        "Microsoft Azure/Azure Stack",
        "IBM Cloud",
        "OCI",
        "GCP",
        "VMware ESXi/vCenter/vRealize",
        "KVM",
        "LXC",
        "Proxmox",
        "Docker",
        "Containerd"
      ]
    },
#endif
#ifdef IOT
    {
      "name": "IoT/Edge",
      "keywords": [
        "MQTT",
        "MQTT Security",
        "LoRaWAN"
      ]
    },
#endif
    {
      "name": "Networks",
      "level": "",
      "keywords": [
        "Cisco Switches",
        "Cisco Routers",
        "F5 BIG-IP LTM",
        "F5 BIG-IP GTM/DNS",
        "A10 Thunder ADC",
        "A10 Thunder CFW",
        "A10 Thunder TPS",
        "Banyan VINES"
      ]
    },{
      "name": "DevOps",
      "level": "",
      "keywords": [
        "Red Hat Ansible",
        "HashiCorp Terraform",
        "HashiCorp Consul",
        "HashiCopr Vault",
        "RHEL/Linux",
        "Ubuntu/Linux"
      ]
    },{
      "name": "Programming",
      "level": "",
      "keywords": [
        "GOlang",
        "Node.JS",
        "Python",
        "Perl",
        "Ruby",
        "C",
        "Groovy",
        "dbase II/III"
      ]
    },{
      "name": "Automation",
      "level": "",
      "keywords": [
        "HashiCorp Terraform",
        "Red Hat Ansible",
        "F5 iRules/iRulesLX",
        "A10 aFlex",
        "F5 iControl",
        "A10 aXAPI"
      ]
    }
  ],
  "publications": [
    {
      "name": "Windows 3.1 Connectivity Secrets",
      "publisher": "IDG Books",
      "releaseDate": "1994-02-01",
      "summary": "Wrote the Banyan Vines section of the book.",
      "url": "http://www.abebooks.com/9781568840307/Windows-3.1-Connectivity-Secrets-Rorabaugh-1568840306/plp"
    },
    {
      "name": "7 Requirements for Optimized Traffic Flow and Security in Kubernetes",
      "publisher": "The New Stack",
      "releaseDate": "2019-07-31",
      "website": "https://thenewstack.io/7-requirements-for-optimized-traffic-flow-and-security-in-kubernetes/"
    },
    {
      "name": "Interview with Tamara McCleary on Future Speed of App Development using AI and Cloud",
      "publisher": "Tamara McCleary",
      "releaseDate": "2018-12-17",
      "website": "https://twitter.com/TamaraMcCleary/status/1074558310945353728"
    },
    {
      "name": "Panel Discussion: Achieving Data Integrity and Security",
      "publisher": "Enterprise IoT Summit - 2017",
      "releaseDate": "2017-03-29",
      "website": "https://www.youtube.com/watch?v=47bL7GIaSiQ"
    },
    {
      "name": "Staff Writer and Technical Reviewer",
      "publisher": "Computer Language Magazine",
      "startDate": "1988",
      "endDate": "1989"
    }
  ],
  "interests": [
    {
      "name": "Amateur Radio",
      "keywords": [
        "HF",
        "VHF",
        "Satellites",
        "ARES/RACES"
      ]
    },
#ifdef IOT
    {
      "name": "Electrical Engineering",
      "keywords": [
        "Arduino",
        "Home Automation",
        "Homemade IoT Sensors",
        "Homemade IoT Actuators"
      ]
    },
#endif
    {
      "name": "Writing",
      "keywords": [
        "Science Fiction",
        "Computers & Networks",
        "Essays"
      ]
    }
  ],
  "meta": {
    "version": "v1.0.0",
    "canonical": "https://github.com/jsonresume/resume-schema/blob/v1.0.0/schema.json"
  }
}
