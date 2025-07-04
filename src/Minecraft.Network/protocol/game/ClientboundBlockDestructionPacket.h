#pragma once

#include "Minecraft.Core/BlockPos.h"
#include "Minecraft.Network/protocol/Packet.h"

class ClientboundBlockDestructionPacket : public Packet,
                                       public std::enable_shared_from_this<ClientboundBlockDestructionPacket> {
public:
    static std::shared_ptr<Packet> create();

    ClientboundBlockDestructionPacket();
    int getEstimatedSize() override;
    EPacketType getPacketId() override;
    void read(DataInputStream* input) override;
    void write(DataOutputStream* output) override;
    void handle(PacketListener* listener) override;

    int getId();
    BlockPos getPos();
    int getProgress();

private:
    int id;
    BlockPos pos;
    int progress;
};
