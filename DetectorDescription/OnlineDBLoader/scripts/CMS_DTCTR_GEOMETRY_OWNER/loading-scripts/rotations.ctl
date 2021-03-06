LOAD DATA
INFILE './data/ROTATIONS.dat'
BADFILE './data/ROTATIONS.bad'
DISCARDFILE './data/ROTATIONS.dsc'
INSERT INTO TABLE CMSINTEGRATION.ROTATIONS
FIELDS TERMINATED by ","
(
  ROT_NAME   CHAR,
  THETAX     INTEGER EXTERNAL,  
  PHIX       INTEGER EXTERNAL,  
  THETAY     INTEGER EXTERNAL,   
  PHIY       INTEGER EXTERNAL, 
  THETAZ     INTEGER EXTERNAL, 
  PHIZ       INTEGER EXTERNAL, 
  REFLECTION INTEGER EXTERNAL
)
